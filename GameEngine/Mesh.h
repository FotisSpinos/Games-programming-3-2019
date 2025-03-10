#pragma once

#include "Common.h"
#include "Vertex.h"
#include "ShaderProgram.h"

class Mesh
{
private:
	std::vector<Vertex> m_vertices;
	std::vector<int> m_indices;
	GLuint m_vao, m_ebo, m_vbo;

public:
	Mesh(std::vector<Vertex> vertices, std::vector<int> indices);
	void SetUpAttrib(int index, int cout, int type, size_t offset);
	void Bind();
	int GetIndiciesCount() { return (int)m_indices.size(); }
	std::vector<Vertex> GetVertices() { return m_vertices; }
};