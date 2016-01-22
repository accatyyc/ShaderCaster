#define GLFW_INCLUDE_GLCOREARB
#import <GLFW/glfw3.h>

GLuint compile_shader(const char *src, GLenum shader_type);
GLuint create_program(GLuint vertex_shader, GLuint fragment_shader);
void print_GL_version(GLFWwindow *window);
