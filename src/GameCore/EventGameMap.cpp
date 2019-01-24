#include "EventGameMap.h"
#include "../TOOLS.h"
EventGameMap::EventGameMap()
{
}
bool EventGameMap::isMouseMoveOn(GLfloat x,GLfloat y)
{
	if(x>=position.x&&x<=position.x+13*32&&y>=position.y&&y<=position.y+32*13)
		return true;
	return false;
}
bool EventGameMap::isMouseClickDown(GLfloat x,GLfloat y,GLuint button)
{
	if(button==GLFW_MOUSE_BUTTON_LEFT)
		++TOOLS::clickTimes;
	if(isMouseMoveOn(x,y)&&button==GLFW_MOUSE_BUTTON_LEFT&&(TOOLS::clickTimes&1)==1)
		return true;
	return false;
}
bool EventGameMap::isMouseClickUp(GLfloat x,GLfloat y,GLuint button)
{
	if(button==GLFW_MOUSE_BUTTON_LEFT)
		++TOOLS::clickTimes;
	if(isMouseMoveOn(x,y)&&button==GLFW_MOUSE_BUTTON_LEFT&&(TOOLS::clickTimes&1)==0)
		return true;
	return false;
}
size_int EventGameMap::getPosition()
{
	return position;
}
bool EventGameMap::isMouseClick(GLfloat x,GLfloat y,GLuint button)
{
	
}
EventGameMap::~EventGameMap()
{
}

