#ifndef GLSHADER_H
#define GLSHADER_H
#include <GL/glew.h>
#include <vector>
struct ShaderInfoPkg
{
	char  filename[64];
	GLenum type;
};
class GLShader
{
public:
	GLShader();
	//着色器ID
	GLuint ShaderProgram;
	//加载着色器代码
	virtual bool LoadProgram(std::vector<ShaderInfoPkg> info);
	//绑定着色器
	virtual bool BindShaderProgram(GLuint shaderprogram, char * code, GLenum ShaderType);
	~GLShader();

};

#endif // GLSHADER_H
