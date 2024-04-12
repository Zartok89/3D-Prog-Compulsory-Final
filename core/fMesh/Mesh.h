#pragma once

#include <string>
#include "Vertex.h"
#include <vector>

#include "misc/OGLUint.h"
#include "Shader.h"

class Mesh
{
public:
    static std::unordered_map<std::string, Mesh*> msCache;

	Mesh() = default;
    Mesh(const std::string& name, std::vector<Vertex>&& vertices, std::vector<Index>&& indices);
    virtual ~Mesh();

	static Mesh* CreateCube();
	void Draw(Shader* shader);
	

private:
	std::vector<Vertex> mVertices{};
	std::vector<Index> mIndices{};

	VAO mVAO{ 0U };
    VBO mVBO{ 0U };
    EBO mEBO{ 0U };

	void MeshSetup();
};
