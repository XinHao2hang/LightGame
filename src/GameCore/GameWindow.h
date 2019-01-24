#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H
#include "../../GLWindow.h"
#include "StartScene.h"
#include "EditSence.h"
class GameWindow : public GLWindow
{
	StartScene start_scene;
	EditSence edit_scene;
	//时间计数器
	GLfloat nowTime = 0.0,LastTime = 0.0,delta_time = 0.0;
public:
	GameWindow();
	//窗口设置
	virtual void WindowSetting();
	virtual void SetCallBack();
	//运行
	virtual void Run();
	//渲染函数
	void Render();
	//鼠标按键回调函数
	void mouse_buttoncallback(GLFWwindow* window, int button, int action, int mods);
	//鼠标移动回调函数
	void mouse_movecallback(GLFWwindow* window, double xpos, double ypos);
	//初始化着色器
	void initShader();
	~GameWindow();
};

#endif // GAMEWINDOW_H
