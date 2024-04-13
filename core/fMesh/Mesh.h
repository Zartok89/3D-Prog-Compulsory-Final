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
	std::vector<unsigned int> mIndices{};

	unsigned int mVAO{ 0U };
    unsigned int mVBO{ 0U };
    unsigned int mEBO{ 0U };

	void MeshSetup();
};
