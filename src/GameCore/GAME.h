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
class GAME
{
public:
	GAME();
	static vector<GameAnimal> global_animal;
	static vector<Block_Animal> global_block;
	static vector<Game2DMesh> global_gameMesh;
	static void loadBlockInfo(const char * filename);
	~GAME();

};

#endif // GAME_H
