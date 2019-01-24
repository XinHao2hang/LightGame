#include "GameMap.h"
#include "../TOOLS.h"
#include<iostream>
using namespace std;
GameMap::GameMap()
{
}
void GameMap::setArray()
{
	for(int i=0;i<(size.x);i++)
	{
		for(int j=0;j<size.y;j++)
		{
			for(int k=0;k<size.z;k++)
			{
				map[i][j][k].setPos(glm::vec3(TOOLS::Pix2Scale(glm::vec3(i*32+position.x,j*32+position.y,0))));
				map[i][j][k].setTexture(-1);
			}
		}
	}
}
void GameMap::initMap(size_int _pos,size_int _size)
{
	setSize(_size);
	setPos(_pos);
	map = new GameBlock**[size.x];
	for(int i=0;i<size.x;i++)
	{
		map[i] =  new GameBlock*[size.y];
		for(int j=0;j<size.y;j++)
		{
			map[i][j] = new GameBlock[size.z];
		}
	}

	setArray();
}
void GameMap::setSize(size_int _size)
{
	size = _size;
}
void GameMap::setPos(size_int _pos)
{
	position = _pos;
}
void GameMap::setBlock(GameBlock block,size_int _pos)
{
	block.setPos(TOOLS::Pix2Scale(glm::vec3(position.x+_pos.x*32,position.y+_pos.y*32,0)));
	map[_pos.x][_pos.y][_pos.z] = block;
}
void GameMap::draw()
{
	for(int i=0;i<size.x;i++)
	{
		for(int j=0;j<size.y;j++)
		{
			for(int k=0;k<size.z;k++)
			{
				map[i][j][k].draw();
			}
		}
	}
}
void GameMap::freeMap()
{
	delete map[0];
	delete map;
}
GameMap::~GameMap()
{
	//delete map[0];
	//delete map;
}

