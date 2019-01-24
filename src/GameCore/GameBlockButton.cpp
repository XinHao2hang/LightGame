#include "GameBlockButton.h"
#include<glm/vec3.hpp>
#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<glm/gtc/type_ptr.hpp>
GameBlockButton::GameBlockButton()
{
}
void GameBlockButton::changeMaxMat()
{
	model_mat = max_mat;
}
void GameBlockButton::changeMinMat()
{
	model_mat = min_mat;
}
void GameBlockButton::setPos(glm::vec3 pos)
{
	position = pos;
	memset(&model_mat,0,sizeof(glm::mat4));
	model_mat = glm::translate(glm::mat4(1.0), position);
	modelID = glGetUniformLocation(shader.ShaderProgram, "model");
	min_mat = model_mat;
	max_mat = glm::scale(model_mat, glm::vec3(2.0f, 2.0f, 0.0f));
}
bool GameBlockButton::conditionMoveOnDraw(GLfloat x,GLfloat y)
{
	if(!isMouseMoveOn(x,y))
	{
		draw();
		return false;
	}
	return true;
}
GLuint GameBlockButton::getTexture()
{
	return pictureID;
}
GameBlockButton::~GameBlockButton()
{
}

