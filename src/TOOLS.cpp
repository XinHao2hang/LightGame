#include "TOOLS.h"
#include <cmath>
#include <cstring>
#include<soil/SOIL.h>
#include "define.h"
#include<iostream>
using namespace std;
GLfloat TOOLS::CursorX = 0.0;
GLfloat TOOLS::CursorY = 0.0;
GLfloat TOOLS::view_height = 0.0;
GLfloat TOOLS::view_width = 0.0;
unsigned long TOOLS::clickTimes = 0;
vector<GLShader> TOOLS::global_shader;
GLScene* TOOLS::nowScene =0;
TOOLS::TOOLS()
{
}
void TOOLS::Coord2Scale(GLfloat pix_x,GLfloat pix_y,GLfloat & x,GLfloat & y)
{
	x = pix_x / (view_width / 2) - 1.0;
	y = -pix_y / (view_height / 2) + 1.0;
}
void TOOLS::Scale2Coord(GLfloat & pix_x,GLfloat & pix_y,GLfloat x,GLfloat y)
{
	pix_x = (view_width / 2) * fabs(x + 1.0);
	pix_y = (view_height / 2) * fabs(y - 1.0);
}
glm::vec3 TOOLS::Pix2Scale(glm::vec3 pos)
{
	glm::vec3 ret(0,0,0);
	Coord2Scale(pos.x,pos.y,ret.x,ret.y);
	return ret;
}
glm::vec3 TOOLS::Scale2Pix(glm::vec3 pos)
{
	glm::vec3 ret(0,0,0);
	Scale2Coord(ret.x,ret.y,pos.x,pos.y);
	return ret;
}
void TOOLS::ReadFormat(const char * format, VertexFmt & res)
{
	int length = strlen(format);
	res.step = 0;
	res.sizes = new int[res.num = length / 2];
	int j = 0;
	for (int i = 0; i < length; i++)
	{
		if (format[i] >= 48 && format[i] <= 57)
		{
			res.sizes[j] = format[i] - '0';
			++j;
			res.step = res.step + format[i] - '0';
		}
	}
}
GLuint TOOLS::LoadTexture(const char * filename,GLenum format,int loadformat)
{
	GLuint texture;
	glGenTextures(1, &texture);
	//绑定纹理为2D
	glBindTexture(GL_TEXTURE_2D, texture);

	// 1. Set texture wrapping to GL_REPEAT (usually basic wrapping method)
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
	// 2. Set texture filtering parameters
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);

	int width, height;
	unsigned char *image = SOIL_load_image(filename, &width, &height, 0, loadformat);
	//生成纹理
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, format, GL_UNSIGNED_BYTE, image);
	//自动生成所有需要的多级渐远纹理
	glGenerateMipmap(GL_TEXTURE_2D);
	//解绑

	SOIL_free_image_data(image);
	glBindTexture(GL_TEXTURE_2D, 0);
	return texture;
}
GLShader TOOLS::LoadVFShader(const char * vfilename,const char * ffilename)
{
	GLShader shader;
	vector<ShaderInfoPkg> PKG;
	ShaderInfoPkg pkg[2];
	strcpy(pkg[0].filename, vfilename);
	pkg[0].type = GL_VERTEX_SHADER;
	PKG.push_back(pkg[0]);
	strcpy(pkg[1].filename, ffilename);
	pkg[1].type = GL_FRAGMENT_SHADER;
	PKG.push_back(pkg[1]);
	shader.LoadProgram(PKG);
	return shader;
}
TOOLS::~TOOLS()
{
}

