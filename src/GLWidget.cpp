#include "GLWidget.h"

GLWidget::GLWidget()
{
}
void GLWidget::setPos(glm::vec3 pos)
{
	position = pos;
}
void GLWidget::setSize(glm::vec3 _size)
{
	size = _size;
}
glm::vec3 GLWidget::getSize()
{
	return size;
}
glm::vec3 GLWidget::getPos()
{
	return position;
}
GLWidget::~GLWidget()
{
}

