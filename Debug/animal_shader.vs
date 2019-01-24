#version 330 core
layout (location = 0) in vec3 Position;
layout (location = 1) in vec2 texCoord;

out vec2 TexCoord;

uniform mat4 model;
uniform mat3 texModel;
void main()
{
	vec3 tempTextCoord;
	gl_Position = model  * vec4(Position, 1.0);
	tempTextCoord = texModel * vec3(texCoord.x, 1.0 - texCoord.y,1.0);
	TexCoord = vec2(tempTextCoord.x,tempTextCoord.y);
}