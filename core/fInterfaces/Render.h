#pragma once
#include <fMesh/Shader.h>

class IRender
{
public:
	virtual void Draw(Shader* shader = nullptr) const = 0;
};