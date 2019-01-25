#ifndef GAMEANIMAL_H
#define GAMEANIMAL_H
#include "../GLShader.h"
#include "Game2DMesh.h"
#include<glm/glm.hpp>
#include<vector>
#include "../GLAnimal.h"
using namespace std;
class GameAnimal : public GLAnimal 
{
protected:
	//网格
	Game2DMesh mesh;
	//着色器
	GLShader shader;
	//纹理
	GLuint texture;
	//时间计数器
	GLfloat nowTime = 0.0,LastTime = 0.0,delta_time = 0.0;
	//动画频率
	GLfloat frequency;
	//纹理动画矩阵,多帧动画
	glm::mat3 model_mat;
	glm::mat4 position_mat;
	vector<glm::mat3> animal_mat;
	//动画帧数
	GLuint frame=0;
	
	//矩阵ID
	GLuint animal_mat_id;
public:
	GLuint frame_num;
	GameAnimal();
	//初始化动画序列
	virtual void addAnimalMat(glm::mat3 _mat);
	//运动
	virtual void animal();
	//设置着色器
	virtual void setShader(GLShader _shader);
	//设置纹理
	virtual void setTexture(GLuint _texture);
	//设置网格
	virtual void setMesh(Game2DMesh _mesh);
	//获取着色器
	virtual GLShader getShader();
	//获取纹理
	virtual GLuint getTexture();
	//获取框架
	virtual Game2DMesh getMesh();
	//获取位置矩阵
	virtual void setPos(glm::vec3 pos);
	//获取位置矩阵
	virtual glm::mat4 getPosMat();
	~GameAnimal();

};

#endif // GAMEANIMAL_H
