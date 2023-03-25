#pragma once
#include <GLFW/glfw3.h>


namespace graphics {
	namespace Window {
		class Window_c 
		{
		public:
			int width, height;

			const char* m_name;

			GLFWwindow* window;

			bool init();
			int window_isClosed();
			GLFWwindow* window_create( int width, int height, const char* name, GLFWmonitor *monitor, GLFWwindow *share);
			bool is_Closed;

			void set_context_current(GLFWwindow* window);
			void set_color(float r_R, float g_G, float b_B, float alpha_A, GLbitfield mask);
			void update_window(GLFWwindow* window);
		public:
			Window_c();
			~Window_c();

		
		};
	}
}

