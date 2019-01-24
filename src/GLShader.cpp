#include "GLShader.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;
GLShader::GLShader()
{
	
}
bool GLShader::LoadProgram(std::vector<ShaderInfoPkg> info)
{
	ShaderProgram = glCreateProgram();
	for (int i = 0; i < info.size(); i++)
	{
		char *Code;
		//读取两个shder文件
		FILE *fp;
		fp = fopen(info[i].filename, "rb+");
		if (fp == NULL)
			continue;
		fseek(fp, 0, SEEK_END);
		int size = ftell(fp);
		fseek(fp, 0, SEEK_SET);
		Code = new char[size + 1];
		fread(Code, 1, size, fp);
		Code[size] = 0;
		fclose(fp);
		if (!BindShaderProgram(ShaderProgram, Code, info[i].type))
			return false;
		delete[] Code;
	}
	GLint success = 0;
	//char ErrorLog[1024] = { 0 };
	//连接shader程序
	glLinkProgram(ShaderProgram);
	//检查shader程序错误信息
	glGetProgramiv(ShaderProgram, GL_LINK_STATUS, &success);
	if (0 == success)
		return false;
	//当前的管线状态程序是否可以被执行
	glValidateProgram(ShaderProgram);
	glGetProgramiv(ShaderProgram, GL_VALIDATE_STATUS, &success);
	if (!success)
		return false;
	return true;
}
bool GLShader::BindShaderProgram(GLuint shaderprogram,char*code,GLenum ShaderType)
{
	GLuint ShaderObj = glCreateShader(ShaderType);
	if (ShaderObj == 0)
	{
		return false;
	}
	//编译着色器代码
	const char *pCode[1];
	pCode[0] = code;
	GLint Lengths[1];
	Lengths[0] = strlen(code);
	glShaderSource(ShaderObj, 1, pCode, Lengths);
	glCompileShader(ShaderObj);//编译shader

	//检查编译的代码是否错误,有错误则输出
	GLint success;
	glGetShaderiv(ShaderObj, GL_COMPILE_STATUS, &success);
	if (!success)
	{
		char InfoLog[1024];
		glGetShaderInfoLog(ShaderObj, 1024, NULL, InfoLog);
		fprintf(stderr, "Invalid shader program: '%s'\n", InfoLog);
		return false;
	}
	//把编译好的shader绑定到Shader程序上
	glAttachShader(ShaderProgram, ShaderObj);
	glDeleteShader(ShaderObj);
	return true;
}
GLShader::~GLShader()
{
}

