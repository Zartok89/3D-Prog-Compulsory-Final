#include "Application.h"
#include <exception>
#include <stdexcept>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

Application* Application::Get()
{
    static Application* app = new Application;
    return app;
}

void Application::InitializeGLFW()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

void Application::Init()
{
    InitializeGLFW();
    mWindow.Init();
    mWindow.RegisterWindowCallbacks(); 
}

void Application::LoadContent()
{
    mWindow.LoadContent();
}

Application::Application()
{
}

int Application::Run()
{
    Init();
    LoadContent();

    float lastFrame = static_cast<float>(glfwGetTime());

    while (!mWindow.IsClosed())
    {
        ///MIdelertidig
        processInput(mWindow);

        float currentFrame = static_cast<float>(glfwGetTime());
        float deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        if (deltaTime > 0.2f)
        {
            deltaTime = 0.2f;
        }
        mWindow.gl_Pollevents(); 
        mWindow.Render(deltaTime);
        mWindow.gl_SwapBuffers(); 
    }
     
    glfwTerminate();

    return 0;
}

void processInput(GLFWwindow* window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}