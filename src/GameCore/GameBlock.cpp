#include "GameBlock.h"

GameBlock::GameBlock()
{
}
void GameBlock::initBlock(GLShader _shader,Game2DMesh _mesh)
{
	block_mesh = _mesh;
	shader = _shader;
}
void GameBlock::setPos(glm::vec3 _pos)
{
	position = _pos;
	memset(&model_mat,0,sizeof(glm::mat4));
	model_mat = glm::translate(glm::mat4(1.0), _pos);
	modelID = glGetUniformLocation(shader.ShaderProgram, "model");
}
void GameBlock::setTexture(GLuint textureID)
{
	texture = textureID;
}
void GameBlock::draw()
{
	if(texture==-1)
		return;
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glBindTexture(GL_TEXTURE_2D,texture);
	glUseProgram(shader.ShaderProgram);
	//位置
	glUniformMatrix4fv(modelID, 1, GL_FALSE, (GLfloat*)glm::value_ptr(model_mat));
	block_mesh.draw();
	//glUseProgram(0);
}
void GameBlock::bindAnimal(GameAnimal animal)
{
	block_mesh = animal.getMesh();
	shader = animal.getShader();
	texture = animal.getTexture();
	modelID = glGetUniformLocation(shader.ShaderProgram, "model");
}
GameBlock::~GameBlock()
{
}
