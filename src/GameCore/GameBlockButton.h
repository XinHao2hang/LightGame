#ifndef GAMEBLOCKBUTTON_H
#define GAMEBLOCKBUTTON_H
#include "../GLButton.h"
class GameBlockButton : public GLButton
{
	glm::mat4 max_mat,min_mat;
	
public:
	int floor;
	int index;
	GameBlockButton();
	//切换放大矩阵
	void changeMaxMat();
	//切换还原矩阵
	void changeMinMat();
	//设置位置
	void setPos(glm::vec3 pos);
	//条件绘制
	bool conditionMoveOnDraw(GLfloat x,GLfloat y);
	//获取纹理
	GLuint getTexture();
	~GameBlockButton();

};

#endif // GAMEBLOCKBUTTON_H
