#ifndef MESH_H
#define MESH_H
#include <GL/glew.h>
#include <glm/vec3.hpp>
//顶点
class Vertex
{
public:
	GLfloat x,y,z;
};
//单一贴图顶点
class SimpleTextureVertex : public Vertex
{
	GLfloat u,v;
};
//网格
class Mesh
{
protected:
	//顶点信息
	GLuint VAO,VBO,EBO;
	//顶点个数
	GLuint index_size;
public:
	Mesh();
	//缩放信息
	//GLfloat zoom;
	glm::vec3 zoom;
	//加载网格
	virtual void LoadMesh(const char*filename,const char*format,glm::vec3 _zoom)=0;
	//绘制网格
	virtual void draw()=0;
	~Mesh();

};

#endif // MESH_H
