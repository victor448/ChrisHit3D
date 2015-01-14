#ifndef MESH_H
#define MESH_H

#include "..\Base\Common.h"
#include "ShaderProgram.h"
#include <vector>
namespace chrisHit
{
	class Mesh
	{
	private:
		CHint vertex_pos;
		CHint position_loc;
		CHuint mesh_vbo;
		CHuint mesh_vao[1];
		//std::vector<CHuint> mesh_vao;
		CHsizei mesh_count;
		//CHfloat *mesh_data;
		ShaderProgram *mesh_program;
		
	public:
		Mesh(const CHvoid *data, CHsizeiptr array_size, CHsizei vertex_count,  ShaderProgram *program);
		Mesh(const CHvoid *data, CHsizeiptr array_size, CHsizei vertex_count);
		~Mesh();
		
		void draw();
		ShaderProgram *getProgram();
	};
}

#endif