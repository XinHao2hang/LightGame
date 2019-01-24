#ifndef EVENTGAMEMAP_H
#define EVENTGAMEMAP_H
#include "GameMap.h"
class EventGameMap :public GameMap
{
public:
	EventGameMap();
	//鼠标移动到控件上
	virtual bool isMouseMoveOn(GLfloat x,GLfloat y);
	//鼠标按下事件
	virtual bool isMouseClickDown(GLfloat x,GLfloat y,GLuint button);
	//鼠标抬起事件
	virtual bool isMouseClickUp(GLfloat x,GLfloat y,GLuint button);
	//鼠标一次点击
	virtual bool isMouseClick(GLfloat x,GLfloat y,GLuint button);
	//获取地图位置
	size_int getPosition();
	~EventGameMap();

};

#endif // EVENTGAMEMAP_H
