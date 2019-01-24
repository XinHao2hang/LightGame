#include "GameWindow.h"
#include "../TOOLS.h"
#include "define.h"
#include <iostream>
#include "../GLShader.h"
#include "GAME.h"
using namespace std;
GameWindow::GameWindow()
{
}

void GameWindow::WindowSetting()
{
	//设置OpenGL版本
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	//OPENGL核心模式
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);
	//窗口大小不可调整
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
	TOOLS::view_width = WIDTH;
	TOOLS::view_height = HEIGHT;
	
}
void GameWindow::SetCallBack()
{
	
	//typedef void (GameWindow::*mouseMCBkPtr)(GLFWwindow* window, double xpos, double ypos);
	typedef void(*fptr_movecallback)(GLFWwindow* window, double xpos, double ypos);
	typedef void(*fptr_buttoncallback)(GLFWwindow* window, int button, int action, int mods);
	//鼠标位置回调
	glfwSetCursorPosCallback(window,fptr_movecallback(&GameWindow::mouse_movecallback));
	//鼠标按键回调
	glfwSetMouseButtonCallback(window,fptr_buttoncallback(&GameWindow::mouse_buttoncallback));
}
void GameWindow::Run()
{
	//GLuint fbo;
	//glGenFramebuffersEXT(1,&fbo);
	initShader();
	GAME::loadBlockInfo("block\\blockinfo.inf");
	start_scene.initScene();
	edit_scene.initScene();
	TOOLS::nowScene = &edit_scene;
	//窗口绘制循环
	while(!glfwWindowShouldClose(window))
	{
		//捕获事件
		glfwPollEvents();
		
		//渲染
		Render();
		glfwSwapBuffers(window);
	}
}
void GameWindow::Render()
{
		glClear(GL_COLOR_BUFFER_BIT);
		TOOLS::nowScene->draw();
}
void GameWindow::mouse_buttoncallback(GLFWwindow* window, int button, int action, int mods)
{
	TOOLS::nowScene->MouseClickEvent(TOOLS::CursorX,TOOLS::CursorY,button);
}
void GameWindow::mouse_movecallback(GLFWwindow* window, double xpos, double ypos)
{
	TOOLS::CursorX = xpos;
	TOOLS::CursorY = ypos;
	TOOLS::nowScene->MouseMoveEvent(xpos,ypos);
}
void GameWindow::initShader()
{
	//加载着色器
	
	TOOLS::global_shader.push_back(TOOLS::LoadVFShader("shader.vs","shader.fs"));
	TOOLS::global_shader.push_back(TOOLS::LoadVFShader("animal_shader.vs","shader.fs"));
}
GameWindow::~GameWindow()
{
}

