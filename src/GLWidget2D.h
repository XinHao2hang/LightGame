#ifndef GLWIDGET2D_H
#define GLWIDGET2D_H
#include "GLWidget.h"
#include "GLShader.h"
#include "Mesh.h"
#include <vector>
#include <glm/glm.hpp>
#include <GLFW/glfw3.h>
class Widget2DMesh : public Mesh
{
public:
	//加载控件网格
	virtual void LoadMesh(const char*filename,const char*format,glm::vec3 _zoom);
	//绘制网格
	virtual void draw();
};
class GLWidget2D : public GLWidget
{
protected:
	//控件网格
	Widget2DMesh widget_frame;
	//空间着色器中的矩阵变量
	GLuint modelID;
	//控件显示空间矩阵
	glm::mat4 model_mat;
	//控件图片
	std::vector<GLuint> picture;
	//当前显示的图片ID
	GLuint pictureID;
	//着色器
	GLShader shader;
public:
	GLWidget2D();
	//创建控件
	virtual void Create(glm::vec3 pos,glm::vec3 _size);
	//鼠标移动到控件上
	virtual bool isMouseMoveOn(GLfloat x,GLfloat y);
	//鼠标按下事件
	virtual bool isMouseClickDown(GLfloat x,GLfloat y,GLuint button);
	//鼠标抬起事件
	virtual bool isMouseClickUp(GLfloat x,GLfloat y,GLuint button);
	//鼠标一次点击
	virtual bool isMouseClick(GLfloat x,GLfloat y,GLuint button);
	//添加控件图片
	virtual void addPicture(GLuint _picture);
	//设置着色器
	virtual void setShader(GLShader _shader);
	//设置网格
	virtual void setFrame(Widget2DMesh mesh);
	//绘制
	virtual void draw();
	//获取Mesh指针
	virtual Widget2DMesh * getMeshPtr();
	//设置初始图片
	virtual void setPictureID(GLuint _pictureID);
	//设置位置
	virtual void setPos(glm::vec3 pos);
	~GLWidget2D();

};

#endif // GLWIDGET2D_H
