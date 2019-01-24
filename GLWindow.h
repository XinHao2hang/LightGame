#ifndef GLWINDOW_H
#define GLWINDOW_H
#include <GL/glew.h>
#include <GLFW/glfw3.h>
class GLWindow
{
protected:
	GLFWwindow * window;
	//窗口设置函数，可以继承
	virtual void WindowSetting()=0;
	//设置回调函数
	virtual void SetCallBack()=0;
	//鼠标按键回调函数
	//virtual void mouse_buttoncallback(GLFWwindow* window, int button, int action, int mods)=0;
	//鼠标移动回调函数
	//virtual void mouse_movecallback(GLFWwindow* window, double xpos, double ypos)=0;
public:
	GLWindow();
	//创建窗口
	bool CreateGLWindow(const char * name,unsigned long window_width,unsigned long window_height,unsigned long view_width,unsigned long view_height);
	//窗口循环渲染
	virtual void Run()=0;
	//设置各个回调函数指针
	void setMouseCallBack(void(*_mouse_callback)(GLFWwindow* window, int button, int action, int mods));
	void setMouseButtonCallBack(void(*_mouse_buttoncallback)(GLFWwindow* window, int button, int action, int mods));
	~GLWindow();
};

#endif // GLWINDOW_H
