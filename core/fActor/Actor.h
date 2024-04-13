#pragma once

///Includes
#include <vector>
#include <string>
#include <glm/glm.hpp>

///Class Includes
#include "Transform.h"

class Actor
{
public:
	virtual ~Actor() = default;
	///Constructor and destructor
	Actor(const std::string& name) {};

	Actor(const Actor&) = delete;
	Actor& operator=(const Actor&) = delete;

	Actor(Actor&&) = default;
	Actor& operator=(Actor&&) = default;

	// Actor update should run first
	virtual void Update(float dt) {};

	///Setters
	void SetTransform(const Transform& transform);
	void SetLocalTransformMatrix(const glm::mat4& transformMatrix);
	void SetLocalPosition(const glm::vec3& position);
	void SetLocalRotation(const glm::quat& rotation);
	void SetLocalScale(const glm::vec3& scale);
	//void SetWorldPosition(const glm::vec3& position);
	//void SetWorldRotation(const glm::quat& rotation);
	//void SetWorldScale(const glm::vec3& scale);

	// Getters
    const glm::vec3& GetLocalPosition() const;
    const glm::quat& GetLocalRotation() const;


protected:

private:
	std::string mName;
	Transform mTransform{};
};
