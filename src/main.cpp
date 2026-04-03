#include "config.h"

int main(){
    GLFWwindow* window;
    if(!glfwInit()){
        std::cout << "GLFW старт работы" << std::endl;
        return -1;
    }
    window = glfwCreateWindow(640, 480, "My window", NULL, NULL);
    glfwMakeContextCurrent(window);

    //процедура загрузки gled
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        glfwTerminate();
        return -1;
    }

    glClearColor(0.25f, 0.5f, 0.75f, 1.0f);

    //окно не закроется пока мы не нажмем на X
    while(!glfwWindowShouldClose(window)){
        glfwPollEvents();
        //очищение буфера цвета
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window);
    }

    glfwTerminate();
    return 0;
}