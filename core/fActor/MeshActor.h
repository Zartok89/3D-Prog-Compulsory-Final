#pragma once
#include <memory>

#include "Actor.h"
#include "fMesh/Mesh.h"
#include "fMesh/Shader.h"
#include "fInterfaces/Render.h"

class MeshActor : public Actor, public IRender
{
	Mesh* mMesh {nullptr};

	MeshActor(std::string& name, Mesh* mesh);
	virtual void Draw(Shader* shader) const override;

};
