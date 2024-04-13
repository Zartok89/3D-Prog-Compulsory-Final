#pragma once

///Includes
#include <memory>

///Class Includes
#include "Actor.h"
#include "fMesh/Mesh.h"
#include "fMesh/Shader.h"
#include "fInterfaces/Render.h"

class StaticMeshActor : public Actor, public IRender
{
public:
	Mesh* mMesh {nullptr};

	StaticMeshActor(const std::string& name, Mesh* mesh);
	virtual void Draw(const class Shader* shader) const override;

};
