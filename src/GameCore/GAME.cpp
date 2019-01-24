#include "GAME.h"
#include <vector>
#include <fstream>
#include "../TOOLS.h"
#include <soil/SOIL.h>
#include <cstring>
using namespace std;
vector<Block_Animal> GAME::global_block;
vector<Game2DMesh> GAME::global_gameMesh;
GAME::GAME()
{
}
void GAME::loadBlockInfo(const char *filename)
{
	//一个普通块，一个动画块，一个贴图基本信息
	GameBlock block,anim_block;
	//加载两种顶点
	Game2DMesh mesh,animalMesh;
	mesh.LoadMesh("blockFrm.svs","3f2f",glm::vec3(32/TOOLS::view_width,32/TOOLS::view_height,0));
	block.initBlock(TOOLS::global_shader[0],mesh);
	//设置动画	
	GameAnimal animal;
	animalMesh.LoadMesh("animal_blockFrm1x2.svs","3f2f",glm::vec3(32/TOOLS::view_width,32/TOOLS::view_height,0));
	animal.setMesh(animalMesh);
	animal.setShader(TOOLS::global_shader[1]);
	animal.addAnimalMat(glm::mat3(1.0,0.0,0.0,  0.0,1.0,0.0,  0.0,0.0,1.0));
	animal.addAnimalMat(glm::mat3(1.0,0.0,0.0,  0.0,1.0,0.0,  0.5,0.0,1.0));
	global_gameMesh.push_back(mesh);
	global_gameMesh.push_back(animalMesh);
	Block_Animal tBlock;
	char path[32];
	RawBlockInfo info;
	int num = 0,isAnim=0;
	//打开文件
	ifstream fin(filename,ios::in);
	fin>>num;
	for(int i=0;i<num;i++)
	//读取并且加载
	{
		memset(path,0,32);
		fin>>path;
		fin>>info.floor;
		info.texture = TOOLS::LoadTexture(path, GL_RGBA, SOIL_LOAD_RGBA);
		block.setTexture(info.texture);
		animal.setTexture(info.texture);
		fin>>isAnim;
		info.isAnim = isAnim;
		tBlock.info = info;
		tBlock.block = block;
		if(isAnim == 1)
		{
			anim_block.bindAnimal(animal);
			tBlock.block = anim_block;
		}
		tBlock.animal = animal;
		global_block.push_back(tBlock);
	}
	fin.close();
}
GAME::~GAME()
{
}

