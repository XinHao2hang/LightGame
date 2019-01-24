#include "GLWindow.h"
#include<iostream>
using namespace std;
GLWindow::GLWindow()
{
}
void GLWindow::WindowSetting()
{
	
}
bool GLWindow::CreateGLWindow(const char * name,unsigned long window_width,unsigned long window_height,unsigned long view_width,unsigned long view_height)
{
	//初始化glfw
	glfwInit();
	//窗口设置
	WindowSetting();
	//创建一个窗口
	window = glfwCreateWindow(window_width, window_height, name, nullptr, nullptr);
	if(window == nullptr)
		return false;
	//设置窗口上下文
	glfwMakeContextCurrent(window);
	
	//glew初始化
	if (glewInit() != GLEW_OK)
		return false;
	//设置视觉范围
	glViewport(0, 0, view_width, view_height);
	SetCallBack();
	cout << glGetString(GL_VERSION) << endl;
	cout << glGetString(GL_RENDERER) << endl;
}
GLWindow::~GLWindow()
{
}

