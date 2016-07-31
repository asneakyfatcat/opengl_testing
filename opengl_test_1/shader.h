#ifndef SHADER_H
#define SHADER_H

#include <iostream>
#include <string>

static const std::string vertSource = 

	"#version 330 core\n\
	layout(location = 0) in vec3 position;\n\
	void main()\n\
	{\n\
		gl_Position = vec4(position.x, position.y, position.z, 1.0);\n\
	}\n" ;

static const std::string fragSource =

"#version 330\n\
\n\
out vec4 color;\n\
\n\
void main()\n\
{\n\
	color = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n\
}\n";

static GLchar const* vertexShaderSource = vertSource.c_str();
static GLchar const* fragmentShaderSource = fragSource.c_str();

#endif
