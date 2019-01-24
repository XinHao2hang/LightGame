#ifndef GAMEBLOCK_H
#define GAMEBLOCK_H
#include <GL/glew.h>
#include <glm/vec3.hpp>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "../Mesh.h"
#include "../GLWidget2D.h"
#include "GameAnimal.h"
class BlockMesh : public Widget2DMesh
{
public:
	
};
class GameBlock
{
protected:
	//块的纹理
	GLuint texture;
	//块框架
	Game2DMesh block_mesh;
	//着色器
	GLShader shader;
	//位置矩阵
	glm::mat4 model_mat;
	GLuint modelID;
	//位置向量
	glm::vec3 position;
	//块属性  暂无
public:
	GameBlock();
	virtual void initBlock(GLShader _shader,Game2DMesh _mesh);
	//设置位置
	virtual void setPos(glm::vec3 _pos);
	//设置纹理
	virtual void setTexture(GLuint textureID);
	//绘制
	virtual void draw();
	//绑定动画
	virtual void bindAnimal(GameAnimal animal);
	~GameBlock();

};

#endif // GAMEBLOCK_H
