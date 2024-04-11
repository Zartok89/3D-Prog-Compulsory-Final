#include "Window.h"
#include <exception>
#include <stdexcept>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <fActor/Scene.h>

/// ///////////////////////////
void processInput(GLFWwindow* window)
{
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
		glfwSetWindowShouldClose(window, true);
}

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	// make sure the viewport matches the new window dimensions; note that width and 
	// height will be significantly larger than specified on retina displays.
	glViewport(0, 0, width, height);
}

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;
/// ////////////////////////

Window::Window(std::string name, Scene* scene, int width, int height)
	:mName(name), mScene(scene), mWidth(width), mHeight(height)
{}

Window::~Window()
{
	glfwDestroyWindow(mGLFWWindow);
	/*ImGui_ImplOpenGL3_Shutdown();
	ImGui_ImplGlfw_Shutdown();
	ImGui::DestroyContext();*/
}

void Window::Init()
{
	//Set GLFWwindow size
	mGLFWWindow = glfwCreateWindow(mWidth, mHeight, mName.c_str(), NULL, NULL); //Sets the size of the GLFWwindow
	assert(mGLFWWindow && "Failed to initialize  glad"); //assrets error if window does not work

	///Makes the context of the window-member specified the current calling-thread
	glfwMakeContextCurrent(mGLFWWindow);

	///Initialisez glad
	int gladResult = gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);  
	assert(gladResult && "Failed to initialize glad"); 

	//IMGUI_CHECKVERSION();
	//ImGui::CreateContext();
	//ImGuiIO& io = ImGui::GetIO(); (void)io;
	//io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;
	//io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;

	//ImGui_ImplGlfw_InitForOpenGL(mGLFWWindow, false);
	//ImGui_ImplOpenGL3_Init("#version 130");
}

bool Window::LoadContent()
{
	mScene->LoadContent();
	return true;
}
 
void Window::gl_Pollevents()
{
	glfwPollEvents();

	/*ImGui_ImplOpenGL3_NewFrame(); 
	ImGui_ImplGlfw_NewFrame(); 
	ImGui::NewFrame(); */

	glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Window::Render(float dt)
{
	if (mScene) mScene->Render(dt);
}

void Window::gl_SwapBuffers()
{
	//ImGui::Render();
	//ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
	glfwSwapBuffers(mGLFWWindow); 
}

void Window::RegisterWindowCallbacks()
{
	glfwSetFramebufferSizeCallback(mGLFWWindow, [](GLFWwindow* window, int width, int height) {
			auto app = reinterpret_cast<Window*>(glfwGetWindowUserPointer(window));
			if (app)
			{
				app->FrameBufferSizeCallback(window, width, height);
				app->setWidth(width);
				app->setHeight(height);
		    }
		    });

	// Store pointer so it can be accessed in callbacks
	glfwSetWindowUserPointer(mGLFWWindow, this);
}

void Window::SetScene(Scene* scene)
{
	mScene = scene;
}

bool Window::IsClosed()
{
	return glfwWindowShouldClose(mGLFWWindow);
}

void Window::FrameBufferSizeCallback(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);

	if (mScene)
	{
		mScene->FrameBufferSizeCallback(this, width, height);
	}
}

void Window::MouseButtonCallback(GLFWwindow* window, int button, int action, int mods)
{
}

void Window::MouseMovementCallback(GLFWwindow* window, double xPos, double yPos)
{
}

void Window::MouseScrollCallback(GLFWwindow* window, double xOffset, double yOffset)
{
}

void Window::KeyCallback(GLFWwindow* window, int key, int action, int scan, int mods)
{
}

void Window::CharCallback(GLFWwindow* window, unsigned int callpoint)
{
}


void Window::setWidth(int width)
{
	mWidth = width;
}

void Window::setHeight(int height)
{
	mHeight = height;
}

int Window::GetWidth() const
{
	return mWidth; 
}

int Window::GetHeight() const
{
	return mHeight; 
}


/// ///////////////////////////////
int Window::Tint()
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
	 return - 1;
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
