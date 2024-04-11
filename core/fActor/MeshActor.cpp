#include "MeshActor.h"

MeshActor::MeshActor(std::string& name, Mesh* mesh): Actor(name)
{
	mMesh = mesh;
}

void MeshActor::Draw(Shader* shader) const
{

}
