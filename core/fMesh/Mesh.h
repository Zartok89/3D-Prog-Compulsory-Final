#pragma once

#include <string>
#include "Vertex.h"
#include <vector>

#include "Shader.h"

class Mesh
{
public:
    Mesh(const std::string& name, std::vector<Vertex>&& vertices, std::vector<unsigned int>&& indices);
    virtual ~Mesh();

	void CreateCube();
	void Draw(Shader* shader);
	

private:
	std::vector<Vertex> mVertices{};
	std::vector<unsigned int> mIndices{};

	unsigned int mVAO{ 0U };
    unsigned int mVBO{ 0U };
    unsigned int mEBO{ 0U };

	void MeshSetup();
};
