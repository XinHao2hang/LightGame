#ifndef GAME_H
#define GAME_H
#include <vector>
#include <GL/glew.h>
#include "GameAnimal.h"
#include "GameBlock.h"
using namespace std;
struct RawBlockInfo
{
	//纹理
	GLuint texture;
	//层数
	int floor;
	//是否动画序列
	int isAnim;
};
struct size_int
{
	int x,y,z;
	size_int(int _x,int _y,int _z):x(_x),y(_y),z(_z){}
	size_int(){};
};
struct Block_Animal
{
	GameBlock block;
	RawBlockInfo info;
	GameAnimal animal;
	int floor;
};
struct RawTexture
{
	//贴图
	GLuint texture;
	//动画张数
	GLuint texture_num;
	//地图显示层数
	int floor;
	
};
struct AnimalInfo
{
	GameAnimal animal;
	RawTexture texture;
	GLuint mesh;
	GLuint shader;
	int num;
	int isAnim;
};
class GAME
{
public:
	GAME();
	static vector<AnimalInfo> global_animal;
	static vector<Game2DMesh> global_gameMesh;//网格资源
	static vector<RawTexture>global_texture;
	static vector<GLShader> global_shader;
	static void loadResource();
	~GAME();

};

#endif // GAME_H
