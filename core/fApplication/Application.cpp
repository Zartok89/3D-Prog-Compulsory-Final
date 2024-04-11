#include <Application.h>
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

int Application::Test()
{
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	//Set GLFWwindow size
	GLFWwindow* thisWindow = glfwCreateWindow(mWidth, mHeight, "Test", NULL, NULL); //Sets the size of the GLFWwindow
	if (thisWindow == NULL)
	{
		assert(thisWindow && "Failed to initialize  glad"); //assrets error if window does not work
		glfwTerminate();
		return -1;
	}

	///Makes the context of the window-member specified the current calling-thread
	glfwMakeContextCurrent(thisWindow);
	glfwSetFramebufferSizeCallback(thisWindow, framebuffer_size_callback);

	///Initialisez glad
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		assert(thisWindow && "Failed to initialize  glad"); //assrets error if window does not work
		return -1;
	}


	while (!glfwWindowShouldClose(thisWindow))
	{
		// input
		// -----
		processInput(thisWindow);

		// render
		// ------
		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT);

		// glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
		// -------------------------------------------------------------------------------
		glfwSwapBuffers(thisWindow);
		glfwPollEvents();
	}

	glfwTerminate();

	return 0;
}

void processInput(GLFWwindow* window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}