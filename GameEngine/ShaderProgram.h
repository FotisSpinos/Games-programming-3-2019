#pragma once
#include "pch.h"
#include "Shader.h"
class ShaderProgram
{
private:
	GLuint m_program;
	std::shared_ptr<Shader> m_vShader;
	std::shared_ptr<Shader> m_fShader;

	bool CheckForLinkErrors();

public:
	ShaderProgram(const std::string& vShaderFile, const std::string&fShaderFile);
	~ShaderProgram();
	void BindAttribLoc(GLuint loc, const char* name);
	void Link();
	void Use();
	GLuint Get() { return m_program; }
};