#include "Window.h"

graphics::Window::Window_c::~Window_c()
{
	
}

graphics::Window::Window_c::Window_c()
{

}

bool graphics::Window::Window_c::init()
{
	glfwInit();

	return true;
}

GLFWwindow* graphics::Window::Window_c::window_create(int width, int height, const char* name, GLFWmonitor *monitor, GLFWwindow *share)
{
	window = glfwCreateWindow(width, height, name, monitor, share);


	return 0;
}




int graphics::Window::Window_c::window_isClosed()
{
	is_Closed = true;

	return glfwWindowShouldClose(window);
}

void graphics::Window::Window_c::set_context_current(GLFWwindow* window)
{
	glfwMakeContextCurrent(window);
}

void graphics::Window::Window_c::set_color(float r_R, float g_G, float b_B, float alpha_A, GLbitfield mask)
{
	/* Render here */

	glClearColor(r_R, g_G, b_B, alpha_A);
	glClear(mask);
}

void graphics::Window::Window_c::update_window(GLFWwindow* window)
{

	/* Swap front and back buffers */

	/* Poll for and process events */
        /* Swap front and back buffers */
	glfwSwapBuffers(window);

	/* Poll for and process events */
	glfwPollEvents();

}