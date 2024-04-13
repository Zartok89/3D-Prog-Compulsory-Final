#include "Actor.h"

void Actor::SetTransform(const Transform& transform)
{
    mTransform = transform;
}

void Actor::SetLocalTransformMatrix(const glm::mat4& transformMatrix)
{
    mTransform.SetTransformMatrix(transformMatrix);
}

void Actor::SetLocalPosition(const glm::vec3& position)
{
    mTransform.SetPosition(position);
}

//void Actor::SetWorldPosition(const glm::vec3& position)
//{
//    if (mParent)
//    {
//        glm::mat4 parentGlobalInverse = glm::inverse(mParent->GetWorldTransformMatrix());
//        glm::vec4 localPosition = parentGlobalInverse * glm::vec4(position, 1.0f);
//        mTransform.SetPosition(glm::vec3(localPosition));
//    }
//    else {
//        mTransform.SetPosition(position);
//    }
//}

void Actor::SetLocalRotation(const glm::quat& rotation)
{
    mTransform.SetRotation(rotation);
}

//void Actor::SetWorldRotation(const glm::quat& rotation)
//{
//    if (mParent)
//    {
//        glm::quat parentGlobalRotationInverse = glm::inverse(glm::quat_cast(mParent->GetWorldTransformMatrix()));
//        glm::quat localRotation = parentGlobalRotationInverse * rotation;
//        mTransform.SetRotation(localRotation);
//    }
//    else
//    {
//        mTransform.SetRotation(rotation);
//    }
//}

void Actor::SetLocalScale(const glm::vec3& scale)
{
    mTransform.SetScale(scale);
}

const glm::vec3& Actor::GetLocalPosition() const { return mTransform.GetPosition(); }

const glm::quat& Actor::GetLocalRotation() const { return mTransform.GetRotation(); }

//void Actor::SetWorldScale(const glm::vec3& scale)
//{
//    if (mParent)
//    {
//        glm::vec3 parentGlobalScale = mParent->GetWorldScale();
//        glm::vec3 relativeScale = scale / parentGlobalScale;
//        mTransform.SetScale(relativeScale);
//    }
//    else
//    {
//        mTransform.SetScale(scale);
//    }
//}
