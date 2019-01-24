#ifndef GLSCENE_H
#define GLSCENE_H
#include <GL/glew.h>
#include "GLButton.h"
class GLScene
{
public:
	GLScene();
	//初始化
	virtual void initScene()=0;
	//绘制
	virtual void draw()=0;
	//鼠标移动事件
	virtual void MouseMoveEvent(GLfloat x,GLfloat y)=0;
	//鼠标点击事件
	virtual void MouseClickEvent(GLfloat x,GLfloat y,GLuint button)=0;
	~GLScene();
};

#endif // GLSCENE_H
