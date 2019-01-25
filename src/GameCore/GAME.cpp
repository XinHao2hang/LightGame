#include "GAME.h"
#include <vector>
#include <fstream>
#include "../TOOLS.h"
#include <soil/SOIL.h>
#include <cstring>
using namespace std;
vector<Game2DMesh> GAME::global_gameMesh;
vector<RawTexture> GAME::global_texture;
vector<AnimalInfo> GAME::global_animal;
vector<GLShader> GAME::global_shader;
GAME::GAME()
{
}
void GAME::loadResource()
{
	int num=0;
	char strings[4][64];
	int string_length = 64;
	
//加载网格
	ifstream fin("loadMesh.inf",ios::in);
	fin>>num;
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<2;j++)
			memset(strings[j],0,string_length);
		for(int j=0;j<2;j++)
			fin>>strings[j];
		int mesh_width,mesh_height;
		fin>>mesh_width>>mesh_height;
		Game2DMesh mesh;
		mesh.LoadMesh(strings[0],strings[1],glm::vec3(mesh_width/TOOLS::view_width,mesh_height/TOOLS::view_height,0.0));
		global_gameMesh.push_back(mesh);
	}
	fin.close();
	
//加载贴图
	fin.open("loadTexture.inf",ios::in);
	fin>>num;
	for(int i=0;i<num;i++)
	{
		int texture_num,floor;
		RawTexture raw_texture;
		memset(strings[0],0,string_length);
		fin>>strings[0]>>floor>>texture_num;
		raw_texture.texture = TOOLS::LoadTexture(strings[0],GL_RGBA, SOIL_LOAD_RGBA);
		raw_texture.floor = floor;
		raw_texture.texture_num = texture_num;
		global_texture.push_back(raw_texture);
	}
	fin.close();
	
//加载着色器
	fin.open("loadShader.inf",ios::in);
	fin>>num;
	for(int i=0;i<num;i++)
	{
		memset(strings[0],0,string_length);
		memset(strings[1],0,string_length);
		fin>>strings[0]>>strings[1];
		GLShader shader;
		global_shader.push_back(TOOLS::LoadVFShader(strings[0],strings[1]));
	}
	fin.close();
	
//加载动画
	fin.open("loadAnimal.inf",ios::in);
	for(int i=0;i<5;i++)
		fin>>strings[0];
	fin>>num;
	for(int i=0;i<num;i++)
	{
		int tnum,texnum,mnum,snum,isAnim;
		fin>>tnum>>texnum>>mnum>>snum>>isAnim;
		GameAnimal animal;
		animal.setTexture(global_texture[texnum].texture);
		animal.setMesh(global_gameMesh[mnum]);
		animal.setShader(global_shader[snum]);
		GLfloat rate = 1.0/global_texture[texnum].texture_num;
		for(int j=0;j<global_texture[texnum].texture_num;j++)
		{
			animal.addAnimalMat(glm::mat3(1.0,0.0,0.0,  0.0,1.0,0.0,  rate*j,0.0,1.0));
		}
		AnimalInfo ainfo;
		ainfo.animal = animal;
		ainfo.mesh = mnum;
		ainfo.shader = snum;
		ainfo.texture = global_texture[texnum];
		ainfo.num = i;
		ainfo.isAnim = isAnim;
		global_animal.push_back(ainfo);
		
	}
	fin.close();
}
GAME::~GAME()
{
}

