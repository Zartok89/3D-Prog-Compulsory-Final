#pragma once

///Includes
#include <string>
#include <vector>
#include <unordered_map>

///Class Includes
#include "fInterfaces/Render.h"
#include "Vertex.h"
#include "Shader.h"
#include "misc/OGLUint.h"
#include "fInterfaces/Render.h"
#include "fActor/Actor.h"

class Mesh
{
public:
	Mesh() = default;
    explicit Mesh(const std::string& name, std::vector<Vertex>&& vertices, std::vector<unsigned int>&& indices);
    virtual ~Mesh();

	void Draw(const Shader* shader) const;
	
	static Mesh* CreateCube();
	static Mesh* Load(const std::string& path);
	static void Unload(const std::string& path);
	static void ClearCache();

	static std::unordered_map<std::string, Mesh*> msCache;

private:
	std::vector<Vertex> mVertices{};
	std::vector<Index> mIndices{};


	VAO mVAO{ 0U };
    VBO mVBO{ 0U };
    EBO mEBO{ 0U };

	void MeshSetup();
};
