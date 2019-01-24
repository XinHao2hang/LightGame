#ifndef TOOLS_H
#define TOOLS_H
#include <GL/glew.h>
#include <glm/vec3.hpp>
#include "GLScene.h"
#include <vector>
using namespace std;
//顶点格式信息
struct VertexFmt
{
	int step;
	int num;
	int *sizes;
};
class TOOLS
{
public:
	TOOLS();
	//鼠标的位置
	static GLfloat CursorX,CursorY;
	static GLScene * nowScene;
	//全局的着色器库
	static vector<GLShader> global_shader;
	//static vector<GLuint> 
	//屏幕长宽
	static GLfloat view_height,view_width;
	//鼠标点击次数,主要用于判断按下还是抬起
	static unsigned long clickTimes;
	//坐标到比例的转换
	static void Scale2Coord(GLfloat & pix_x, GLfloat & pix_y, GLfloat x, GLfloat y);
	//比例到坐标的转换
	static void Coord2Scale(GLfloat  pix_x, GLfloat  pix_y, GLfloat & x, GLfloat & y);
	//像素到比例
	static glm::vec3 Pix2Scale(glm::vec3 pos);
	//比例到像素
	static glm::vec3 Scale2Pix(glm::vec3 pos);
	//顶点格式转换
	static void ReadFormat(const char *format, VertexFmt&res);
	//加载纹理
	static GLuint LoadTexture(const char*filename,GLenum format, int loadformat);
	//加载着色器
	static GLShader LoadVFShader(const char * vfilename,const char * ffilename);
	~TOOLS();

};

#endif // TOOLS_H
