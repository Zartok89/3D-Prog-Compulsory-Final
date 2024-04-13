#pragma once

///Includes
#include <string>

///Class Includes
#include "Transform.h"

class Actor
{
public:
	///Constructor and destructor
	Actor(const std::string& name) {};

	Actor(const Actor&) = delete;
	Actor& operator=(const Actor&) = delete;

	Actor(Actor&&) = default;
	Actor& operator=(Actor&&) = default;

	///Setters
	void SetTransform(const Transform& transform);
	void SetLocalTransformMatrix(const glm::mat4& transformMatrix);
	void SetLocalPosition(const glm::vec3& position);
	void SetLocalRotation(const glm::quat& rotation);
	void SetLocalScale(const glm::vec3& scale);
	//void SetWorldPosition(const glm::vec3& position);
	//void SetWorldRotation(const glm::quat& rotation);
	//void SetWorldScale(const glm::vec3& scale);

protected:


private:
	std::string mName;
	Transform mTransform{}; 
};
