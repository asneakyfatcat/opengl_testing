#ifndef KEY_H
#define KEY_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <math.h>
#include <windows.h>

void key_callback();

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
{
	// When a user presses the escape key, we set the WindowShouldClose property to true, 
	// closing the application
	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GL_TRUE);
}

#endif

