#include <glm/glm.hpp>
#include <soil/SOIL.h>
#include "src/GameCore/GameWindow.h"
#include "define.h"

int main()
{
	
	GameWindow window;
	//window.setMouseButtonCallBack()
	window.CreateGLWindow("GL",WIDTH,HEIGHT,WIDTH,HEIGHT);
	window.Run();
	return 0;
}