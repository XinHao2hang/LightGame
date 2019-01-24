#ifndef STARTSCENE_H
#define STARTSCENE_H
#include "../GLButton.h"
#include "../GLScene.h"
#include <vector>
using namespace std;
class StartScene:public GLScene
{
	GLButton button1;
	vector<StartScene(*)()>btn_fun;
public:
	StartScene();
	//初始化场景
	virtual void initScene();
	//绘制
	virtual void draw();
	//鼠标移动事件
	virtual void MouseMoveEvent(GLfloat x,GLfloat y);
	//鼠标点击事件
	virtual void MouseClickEvent(GLfloat x,GLfloat y,GLuint button);
	//鼠标事件
	void Btn_EditOnClick();
	~StartScene();

};

#endif // STARTSCENE_H
