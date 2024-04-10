#pragma once

///Includes
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <vector>
#include <unordered_map>

struct Vertex
{
	///Vertex members
	glm::vec3 mPosition;
	glm::vec3 mNormals;
	glm::vec2 mTextCoord;

	///Vertex struct
	Vertex() {};

	Vertex(const glm::vec3& Position, const glm::vec3& Normals, const glm::vec2 TextCoord)
		:mPosition(Position), mNormals(Normals), mTextCoord(TextCoord) {};

	static void VertexAttribs()
	{
		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, mPosition));
		glEnableVertexAttribArray(0);

		glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, mNormals));
		glEnableVertexAttribArray(1);

		glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void*)offsetof(Vertex, mTextCoord));
		glEnableVertexAttribArray(2);
	}
};