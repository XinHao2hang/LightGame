#include "EditSence.h"
#include <iostream>
#include <soil/SOIL.h>
#include "../TOOLS.h"
#include "GAME.h"

using namespace std;
EditSence::EditSence()
{
}
void EditSence::initScene()
{
	block_button = new GameBlockButton[BLOCK_NUM];
	char filename[32];
	//初始化按钮信息
	for(int i=0;i<BLOCK_NUM;i++)
	{
		block_button[i].setFrame(GAME::global_gameMesh[GAME::global_block[i].info.isAnim]);
		block_button[i].setShader(TOOLS::global_shader[0]);
		block_button[i].setPos(TOOLS::Pix2Scale(glm::vec3(i*32+32,32,0)));
		block_button[i].floor = GAME::global_block[i].info.floor;
		block_button[i].addPicture(GAME::global_block[i].info.texture);
		block_button[i].setPictureID(0);
		block_button[i].index = i;
	}
	//初始化地图
	edit_map.initMap(size_int(200,300,0),size_int(13,13,2));
	for(int i=0;i<13;i++)
	{
		edit_map.setBlock(GAME::global_block[11].block,size_int(i,0,0));
		edit_map.setBlock(GAME::global_block[11].block,size_int(0,i,0));
		edit_map.setBlock(GAME::global_block[11].block,size_int(i,12,0));
		edit_map.setBlock(GAME::global_block[11].block,size_int(12,i,0));
	}
}
void EditSence::draw()
{
	//static int index=0;
	for(int i=0;i<GAME::global_block.size();i++)
	{
		if(GAME::global_block[i].info.isAnim==1)
		{
			GAME::global_block[i].animal.animal();
		}
	}
	for(int i=0;i<BLOCK_NUM;i++)
	{
		//条件绘制，如果鼠标在上面就不绘制
		if(block_button[i].conditionMoveOnDraw(TOOLS::CursorX,TOOLS::CursorY))
			block_select = i;
	}
	//最后绘制
	block_button[block_select].draw();
	edit_map.draw();
}
void EditSence::MouseClickEvent(GLfloat x,GLfloat y,GLuint button)
{
	for(int i=0;i<BLOCK_NUM;i++)
	{
		if(block_button[i].isMouseClickDown(x,y,button))
		{
			block_select = i;
			break;
		}
	}
	if(edit_map.isMouseClickUp(x,y,button))
	{
		int mapx = (x - edit_map.getPosition().x+32/2) / 32;
		int mapy = (y - edit_map.getPosition().y+32/2) / 32;
		if(mapx>=1&&mapx<=11&&mapy>=1&&mapy<=11)
			edit_map.setBlock(GAME::global_block[block_button[block_select].index].block,size_int(mapx,mapy,block_button[block_select].floor));
		
	}
	
}
void EditSence::MouseMoveEvent(GLfloat x,GLfloat y)
{
	for(int i=0;i<BLOCK_NUM;i++)
	{
		if(block_button[i].isMouseMoveOn(x,y))
			block_button[i].changeMaxMat();
		else
			block_button[i].changeMinMat();
	}
}
EditSence::~EditSence()
{
}

