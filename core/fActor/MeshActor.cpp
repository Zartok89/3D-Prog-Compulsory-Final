#include "MeshActor.h"

MeshActor::MeshActor(const std::string& name, Mesh* mesh)
    : Actor(name), mMesh(mesh) {}


void MeshActor::Draw(const Shader* shader) const
{
    if (!mMesh) return;
    mMesh->Draw(shader);
}
