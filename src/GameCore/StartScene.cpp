#include "StartScene.h"
#include <vector>
#include<soil/SOIL.h>
#include<iostream>
#include "../TOOLS.h"
using namespace std;
StartScene::StartScene()
{
}
void StartScene::initScene()
{
	//填写框架
	button1.getMeshPtr()->LoadMesh("ButtonFrm.svs","3f2f",glm::vec3(0.33,0.1,0.0));
	//设置大小
	button1.setSize(glm::vec3(256,64,0));
	//设置着色器
	button1.setShader(TOOLS::global_shader[0]);
	//设置位置
	button1.setPos(TOOLS::Pix2Scale(glm::vec3(400,400,0)));
	button1.addPicture(TOOLS::LoadTexture("edit\\normal.png", GL_RGB,SOIL_LOAD_RGB));
	button1.addPicture(TOOLS::LoadTexture("edit\\moveon.png", GL_RGB, SOIL_LOAD_RGB));
	button1.setPictureID(0);
}
void StartScene::MouseClickEvent(GLfloat x,GLfloat y,GLuint button)
{
	
}
void StartScene::MouseMoveEvent(GLfloat x,GLfloat y)
{
	if(button1.isMouseMoveOn(x,y))
	{
		button1.setPictureID(1);
	}
	else
	{
		button1.setPictureID(0);
	}
}
void StartScene::draw()
{
	button1.draw();
}
StartScene::~StartScene()
{
}

