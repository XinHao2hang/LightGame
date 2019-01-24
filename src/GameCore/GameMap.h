#ifndef GAMEMAP_H
#define GAMEMAP_H
#include "GAME.h"
#include "GameBlock.h"
class GameMap
{
protected:
	//地图指针
	GameBlock *** map;
	//地图大小
	size_int size;
	//地图位置,左上角
	size_int position;
	//排列地图块
	void setArray();
public:
	GameMap();
	//初始化地图
	virtual void initMap(size_int _pos,size_int _size);
	//设置块
	virtual void setBlock(GameBlock block,size_int _pos);
	//设置位置
	virtual void setPos(size_int _pos);
	//设置地图大小
	virtual void setSize(size_int _size);
	//绘制
	virtual void draw();
	//卸载地图
	virtual void freeMap();
	~GameMap();

};

#endif // GAMEMAP_H
