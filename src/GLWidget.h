#ifndef GLWIDGET_H
#define GLWIDGET_H
#include <glm/vec3.hpp>
#include <GL/glew.h>
class GLWidget
{
protected:
	//控件的长宽
	glm::vec3 size;
	//控件位置
	glm::vec3 position;
public:
	GLWidget();
	//控件初始化
	virtual void Create(glm::vec3 pos,glm::vec3 _size)=0;
	//设置控件大小
	virtual void setSize(glm::vec3 _size);
	//设置控件位置
	virtual void setPos(glm::vec3 pos);
	//获取控件大小
	virtual glm::vec3 getSize();
	//获取控件位置
	virtual glm::vec3 getPos();
	//事件发生函数
	//virtual void Event(GLfloat x,GLfloat y)=0;
	//virtual void Event(GLfloat x,GLfloat y,GLuint button)=0;
	//鼠标移动到控件上
	virtual bool isMouseMoveOn(GLfloat x,GLfloat y)=0;
	//鼠标按下事件
	virtual bool isMouseClickDown(GLfloat x,GLfloat y,GLuint button)=0;
	//鼠标抬起事件
	virtual bool isMouseClickUp(GLfloat x,GLfloat y,GLuint button)=0;
	//鼠标一次点击
	virtual bool isMouseClick(GLfloat x,GLfloat y,GLuint button)=0;
	//绘制
	virtual void draw()=0;
	~GLWidget();
};

#endif // GLWIDGET_H
