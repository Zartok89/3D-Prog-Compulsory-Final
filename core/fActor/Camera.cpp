#include "Camera.h"

Camera::Camera(const std::string name, glm::vec3 position, glm::quat rotation, float aspectRatio, float nearPlane,
	float farPlane, float fieldOfView, float maxMovementSpeed, float accelerationSpeed, float dampingFactor) : Actor(name)
{
	mMaxMovementSpeed = maxMovementSpeed;
	mAccelerationSpeed = accelerationSpeed;
	mDampingFactor = dampingFactor;
	mAspectRatio = aspectRatio;
	mNearPlane = nearPlane;
	mFarPlane = farPlane;
	mFieldOfView = fieldOfView;
}

void Camera::Update(float dt)
{
	UpdateVelocity(dt);
	UpdatePosition(dt);
	UpdateDamping(dt);
	UpdateAngularVelocity(dt);
	UpdateRotation(dt);
	UpdateAngularDamping(dt);
}

void Camera::AddVelocity(const glm::vec3& velocity)
{
	mVelocity += velocity;
}

void Camera::AddYaw(float angleDegrees)
{
	mYaw += angleDegrees;
	// Ensure yaw stays within a reasonable range
	mYaw = std::fmod(mYaw, 360.0f);

	UpdateRotationFromYawPitch();
}

void Camera::AddPitch(float angleDegrees)
{
	// Calculate new pitch and clamp it to prevent flipping
	float newPitch = std::clamp(mPitch + angleDegrees, -89.0f, 89.0f);
	mPitch = newPitch;

	UpdateRotationFromYawPitch();
}

void Camera::AddAngularVelocity(const glm::vec2& angularVelocityDelta)
{
	mAngularVelocity += angularVelocityDelta;
}

void Camera::AddAngularAcceleration(const glm::vec2& angularAccelerationDelta)
{
	mAngularAcceleration += angularAccelerationDelta;
}

void Camera::SetAspectRatio(float aspectRatio)
{
}

void Camera::SetVelocity(const glm::vec3& velocity)
{
}

void Camera::SetAccelerationSpeed(float accelerationSpeed)
{
}

void Camera::SetAcceleration(const glm::vec3& acceleration)
{
}

void Camera::SetMaxMovementSpeed(float movementSpeed)
{
}

void Camera::SetAngularVelocity(const glm::vec2& angularVelocity)
{
}

void Camera::SetAngularAcceleration(const glm::vec2& angularAcceleration)
{
}

void Camera::SetAngularDampingFactor(float dampingFactor)
{
}

void Camera::SetPitch(float pitchDegrees)
{
}

void Camera::SetYaw(float yawDegrees)
{
}

float Camera::GetMaxMovementSpeed() const { return mMaxMovementSpeed; }
float Camera::GetAspectRatio() const { return mAspectRatio; }
float Camera::GetNearPlane() const { return mNearPlane; }
float Camera::GetFarPlane() const { return mFarPlane; }
float Camera::GetFieldOfView() const { return mFieldOfView; }
float Camera::GetAccelerationSpeed() const { return mAccelerationSpeed; }
const glm::vec3& Camera::GetVelocity() const { return mVelocity; }

const glm::vec3& Camera::GetAcceleration() const { return mAcceleration; }
const glm::vec2& Camera::GetAngularVelocity() const { return mAngularVelocity; }
const glm::vec2& Camera::GetAngularAcceleration() const { return mAngularAcceleration; }
float Camera::GetAngularDampingFactor() const { return mAngularDampingFactor; }
float Camera::GetAngularAccelerationSpeed() const { return mAngularAccelerationSpeed; }

glm::vec3 Camera::GetFront() const { return glm::rotate(GetLocalRotation(), glm::vec3(0.0f, 0.0f, -1.0f)); }
glm::vec3 Camera::GetUp() const { return glm::rotate(GetLocalRotation(), glm::vec3(0.0f, 1.0f, 0.0f)); }

glm::mat4 Camera::GetViewMatrix() const { return glm::lookAt(GetLocalPosition(), GetLocalPosition() + GetFront(), glm::vec3(0.0f, 1.0f, 0.0f)); }
const glm::mat4& Camera::GetProjectionMatrix() const { return mProjectionMatrix; }
glm::mat4 Camera::GetVPMatrix() const { return mProjectionMatrix * GetViewMatrix(); }

void Camera::UpdateVelocity(float dt)
{
	mVelocity += mAcceleration * dt;

	if (glm::length(mVelocity) > mMaxMovementSpeed)
	{
		mVelocity = glm::normalize(mVelocity) * mMaxMovementSpeed;
	}

	mAcceleration = glm::vec3(0.f);
}

void Camera::UpdatePosition(float dt)
{
	glm::vec3 front = GetFront();
	glm::vec3 right = glm::normalize(glm::cross(front, glm::vec3(0.0f, 1.0f, 0.0f)));
	glm::vec3 up = glm::cross(right, front);

	SetLocalPosition(GetLocalPosition() + mVelocity.x * dt * right + mVelocity.y * dt * up + mVelocity.z * dt * front);
}

void Camera::UpdateRotation(float dt)
{
	AddYaw(mAngularVelocity.x * dt);
	AddPitch(mAngularVelocity.y * dt);
}

void Camera::UpdateAngularVelocity(float dt)
{
	mAngularVelocity += mAngularAcceleration * dt;
	// Clamp angular velocity to the maximum allowed
	mAngularVelocity = glm::clamp(mAngularVelocity, -mMaxAngularSpeed, mMaxAngularSpeed);
}

void Camera::UpdateAngularDamping(float dt)
{
	mAngularAcceleration = glm::vec2(0.0f);

	if (glm::length(mAngularVelocity) > 0)
	{
		mAngularVelocity -= mAngularVelocity * mAngularDampingFactor * dt;
		if (glm::length(mAngularVelocity) < 0.001f)
		{
			mAngularVelocity = glm::vec2(0.0f);
		}
	}
}

void Camera::UpdateDamping(float dt)
{
	float dampingFactor = glm::length(mVelocity) > 0 ? mDampingFactor : 0.0f;

	mVelocity -= mVelocity * dampingFactor * dt;

	if (glm::length(mVelocity) < 0.001f)
	{
		mVelocity = glm::vec3(0.0f);
	}
}

void Camera::UpdateProjectionMatrix()
{
	mProjectionMatrix = glm::perspectiveRH(glm::radians(mFieldOfView), mAspectRatio, mNearPlane, mFarPlane);
}

void Camera::UpdateRotationFromYawPitch()
{
	glm::quat pitchQuat = glm::angleAxis(glm::radians(mPitch), glm::vec3(1.0f, 0.0f, 0.0f));
	glm::quat yawQuat = glm::angleAxis(glm::radians(mYaw), glm::vec3(0.0f, 1.0f, 0.0f));

	// Combined rotation
	glm::quat newRotation = yawQuat * pitchQuat;
	newRotation = glm::normalize(newRotation); // Ensure the quaternion is normalized

	// Assuming SetRotation directly sets the Transform's rotation
	this->SetLocalRotation(newRotation);
}