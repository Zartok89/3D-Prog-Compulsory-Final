#include "Actor.h"

void Actor::UpdateComponents(float dt)
{
	//for (auto component : mComponents)
	//{
	//	component->Update(dt);
	//};
}

void Actor::SetTransform(const Transform& transform) { mTransform = transform; }

void Actor::SetLocalTransformMatrix(const glm::mat4& transformMatrix) { mTransform.SetTransformMatrix(transformMatrix); }

void Actor::SetLocalPosition(const glm::vec3& position) { mTransform.SetPosition(position); }

void Actor::SetLocalRotation(const glm::quat& rotation) { mTransform.SetRotation(rotation); }

void Actor::SetLocalScale(const glm::vec3& scale) { mTransform.SetScale(scale); }

void Actor::SetWorldPosition(const glm::vec3& position) { glm::vec3(0.f, 0.f, 0.f); }

void Actor::SetWorldRotation(const glm::quat& rotation)
{
}

void Actor::SetWorldScale(const glm::vec3& scale)
{
}

const glm::vec3& Actor::GetLocalPosition() const { return mTransform.GetPosition(); }

glm::vec3 Actor::GetWorldPosition() const
{
	return glm::vec3(GetWorldTransformMatrix()[3]);
}

const glm::quat& Actor::GetLocalRotation() const { return mTransform.GetRotation(); }

glm::quat Actor::GetWorldRotation() const
{
	glm::vec3 scale;
	glm::quat rotation;
	glm::vec3 translation;
	glm::vec3 skew;
	glm::vec4 perspective;
	glm::decompose(GetWorldTransformMatrix(), scale, rotation, translation, skew, perspective);
	return rotation;
}

const glm::vec3& Actor::GetLocalScale() const { return mTransform.GetScale(); }

glm::vec3 Actor::GetWorldScale() const
{
	glm::vec3 scale;
	glm::quat rotation;
	glm::vec3 translation;
	glm::vec3 skew;
	glm::vec4 perspective;
	glm::decompose(GetWorldTransformMatrix(), scale, rotation, translation, skew, perspective);
	return scale;
}

const Transform& Actor::GetLocalTransform() const { return mTransform; }

std::vector<Actor*>& Actor::GetChildren() { return mChildren; }

glm::vec3 Actor::GetRight() const { return mTransform.GetRight(); }

const glm::mat4 Actor::GetLocalTransformMatrix() const { return mTransform.GetTransformMatrix(); }

glm::mat4 Actor::GetWorldTransformMatrix() const { return mTransform.GetTransformMatrix(); }