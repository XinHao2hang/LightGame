#include "GameAnimal.h"
#include<GLFW/glfw3.h>
#include<glm/vec3.hpp>
#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<glm/gtc/type_ptr.hpp>
GameAnimal::GameAnimal()
{
}
void GameAnimal::addAnimalMat(glm::mat3 _mat)
{
	animal_mat.push_back(_mat);
	model_mat = animal_mat[0];
	glUseProgram(shader.ShaderProgram);
	glUniformMatrix3fv(animal_mat_id, 1, GL_FALSE, (GLfloat*)glm::value_ptr(model_mat));
	glUseProgram(0);
	frame=0;
}
void GameAnimal::animal()
{
	nowTime = glfwGetTime();	
	delta_time += (nowTime - LastTime);
	LastTime = nowTime;
	if(delta_time>0.5)
	{
		delta_time = 0.0;
		model_mat = animal_mat[(++frame)%animal_mat.size()];
		glUseProgram(shader.ShaderProgram);
		glUniformMatrix3fv(animal_mat_id, 1, GL_FALSE, (GLfloat*)glm::value_ptr(model_mat));
		glUseProgram(0);
	}
}
void GameAnimal::setShader(GLShader _shader)
{
	shader = _shader;
	animal_mat_id = glGetUniformLocation(shader.ShaderProgram, "texModel");
}
void GameAnimal::setTexture(GLuint _texture)
{
	texture = _texture;
}
void GameAnimal::setMesh(Game2DMesh _mesh)
{
	mesh = _mesh;
}
Game2DMesh GameAnimal::getMesh()
{
	return mesh;
}
GLShader GameAnimal::getShader()
{
	return shader;
}
GLuint GameAnimal::getTexture()
{
	return texture;
}
GameAnimal::~GameAnimal()
{
}

