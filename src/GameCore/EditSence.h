#ifndef EDITSENCE_H
#define EDITSENCE_H
#include "../GLScene.h"
#include "GameBlockButton.h"
#include "EventGameMap.h"
#include "GameAnimal.h"
#define BLOCK_NUM 14
class EditSence : public GLScene
{
	GameBlockButton*block_button;
	EventGameMap edit_map;
	int block_select=0;
public:
	EditSence();
	//初始化
	virtual void initScene();
	//绘制
	virtual void draw();
	//鼠标移动事件
	virtual void MouseMoveEvent(GLfloat x,GLfloat y);
	//鼠标点击事件
	virtual void MouseClickEvent(GLfloat x,GLfloat y,GLuint button);
	~EditSence();

};

#endif // EDITSENCE_H
