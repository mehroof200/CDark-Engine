#include <GLFW/glfw3.h>
#include <iostream>

#include "Window/Window.h"

int main(void)
{
	graphics::Window::Window_c c;


	GLFWwindow* win;

	if (!c.init())
	{
		std::cout << "Failed!" << std::endl;
		return -1;
	}



	win = c.window_create(640, 480, "SLAP", NULL, NULL);

	if (!win)
	{
		glfwTerminate();
		std::cout << "No Window!" << std::endl;

		return -1;
	}

	c.set_context_current(win);

	while (!c.window_isClosed())
	{
		c.set_color(1.0f, 1.0f, 1.0f, 1.0f, GL_COLOR_BUFFER_BIT);

		c.update_window(win);
	}

	glfwTerminate();
	return 0;
}