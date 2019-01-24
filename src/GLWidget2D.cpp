#include "GLWidget2D.h"
#include <glm/gtc/type_ptr.hpp>
#include <fstream>
#include <vector>
#include <GL/glew.h>
#include "TOOLS.h"
GLWidget2D::GLWidget2D()
{
}
void GLWidget2D::Create(glm::vec3 pos,glm::vec3 _size)
{
	position = pos;
	size = _size;
}
void GLWidget2D::addPicture(GLuint _picture)
{
	picture.push_back(_picture);
}
bool GLWidget2D::isMouseMoveOn(GLfloat x,GLfloat y)
{
	glm::vec3 widget_pos = TOOLS::Scale2Pix(position);
	//判断是否在控件范围内
	if(fabs(x-widget_pos.x)<=TOOLS::view_width*widget_frame.zoom.x/2&&fabs(y-widget_pos.y)<=TOOLS::view_height*widget_frame.zoom.y/2)
		return true;
	return false;
}
bool GLWidget2D::isMouseClickDown(GLfloat x,GLfloat y,GLuint button)
{
	if(button==GLFW_MOUSE_BUTTON_LEFT)
		++TOOLS::clickTimes;
	if(isMouseMoveOn(x,y)&&button==GLFW_MOUSE_BUTTON_LEFT&&(TOOLS::clickTimes&1)==1)
		return true;
	return false;
}
bool GLWidget2D::isMouseClickUp(GLfloat x,GLfloat y,GLuint button)
{
	if(button==GLFW_MOUSE_BUTTON_LEFT)
		++TOOLS::clickTimes;
	if(isMouseMoveOn(x,y)&&button==GLFW_MOUSE_BUTTON_LEFT&&(TOOLS::clickTimes&1)==0)
		return true;
	return false;
}
bool GLWidget2D::isMouseClick(GLfloat x,GLfloat y,GLuint button)
{
	if(button==GLFW_MOUSE_BUTTON_LEFT)
		++TOOLS::clickTimes;
	if(isMouseMoveOn(x,y)&&button==GLFW_MOUSE_BUTTON_LEFT&&(TOOLS::clickTimes&1)==0)
		return true;
	return false;
}
void GLWidget2D::setShader(GLShader _shader)
{
	shader = _shader;
}
void GLWidget2D::setFrame(Widget2DMesh mesh)
{
	widget_frame = mesh;
}
void GLWidget2D::draw()
{
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBindTexture(GL_TEXTURE_2D,pictureID);
	glUseProgram(shader.ShaderProgram);
	//位置
	glUniformMatrix4fv(modelID, 1, GL_FALSE, (GLfloat*)glm::value_ptr(model_mat));
	widget_frame.draw();
}
Widget2DMesh * GLWidget2D::getMeshPtr()
{
	return &widget_frame;
}
void GLWidget2D::setPictureID(GLuint _pictureID)
{
	pictureID = picture[_pictureID];
}
void GLWidget2D::setPos(glm::vec3 pos)
{
	position = pos;
	memset(&model_mat,0,sizeof(glm::mat4));
	model_mat = glm::translate(glm::mat4(1.0), position);
	modelID = glGetUniformLocation(shader.ShaderProgram, "model");
}
GLWidget2D::~GLWidget2D()
{
}

void Widget2DMesh::LoadMesh(const char * filename,const char * format,glm::vec3 _zoom)
{
	zoom = _zoom;
	std::ifstream readfile(filename);
	SimpleTextureVertex tVertex;
	std::vector<GLuint>index;
	std::vector<SimpleTextureVertex>vertex;
	GLfloat * ptVertex = (GLfloat*)(&tVertex);
	if (readfile.good())
	{
		int vertexNum = 0, dimension = 0;
		readfile >> vertexNum >> dimension;
		//读取顶点数
		for (int i = 0; i < vertexNum; i++)
		{
			for (int j = 0; j < dimension; j++)
			{
				readfile >> ptVertex[j];
				if(j<3)
				{
					if(j==0)
					ptVertex[j]*=zoom.x;
					if(j==1)
					ptVertex[j]*=zoom.y;
				}
			}
			vertex.push_back(tVertex);
		}
		int indexNum = 0;
		readfile >> indexNum;
		for (int j = 0; j < indexNum; j++)
		{
			GLuint tindex;
			readfile >> tindex;
			index.push_back(tindex);
		}
		readfile.close();
	}
	//readfile >> scaleX >> scaleY;
	
	//创建VAO VBO
	int a=10;
	a++;
	glGenVertexArrays(1, &VAO);
	glGenBuffers(1, &VBO);
	glGenBuffers(1, &EBO);
	//绑定VAO
	glBindVertexArray(VAO);
	//绑定VBO,复制顶点
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(SimpleTextureVertex) * vertex.size(), &vertex[0], GL_STATIC_DRAW);
	//复制下标
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(GLuint) * index.size(), &index[0], GL_STATIC_DRAW);
	index_size = index.size();
	VertexFmt Fmt;
	TOOLS::ReadFormat(format,Fmt);
	int offset = 0;
	//设置格式
	for (int i = 0; i < Fmt.num; i++)
	{
		glVertexAttribPointer(i, Fmt.sizes[i], GL_FLOAT, GL_FALSE, Fmt.step * sizeof(GLfloat), (GLvoid*)(offset * sizeof(GLfloat)));
		glEnableVertexAttribArray(i);
		offset = offset + Fmt.sizes[i];
	}
	glBindVertexArray(0);
}
void Widget2DMesh::draw()
{
	glBindVertexArray(VAO);
	glDrawElements(GL_TRIANGLE_STRIP, index_size, GL_UNSIGNED_INT, 0);
	glBindVertexArray(0);
}

