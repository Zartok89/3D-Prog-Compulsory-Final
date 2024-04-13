#include "Window.h"

///Includes
#include <exception>
#include <stdexcept>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

///Class Includes
#include <fActor/Scene.h>

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

void Window::Update(float dt)
{
	if (mScene)
		mScene->Update(dt);
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
			app->SetWidth(width);
			app->SetHeight(height);
		}
		});

	// Store pointer so it can be accessed in callbacks
	glfwSetWindowUserPointer(mGLFWWindow, this);

	glfwSetCursorPosCallback(mGLFWWindow, [](GLFWwindow* window, double xpos, double ypos) {
		auto app = reinterpret_cast<Window*>(glfwGetWindowUserPointer(window));
		if (app) app->MouseMovementCallback(window, xpos, ypos);
		});
	glfwSetMouseButtonCallback(mGLFWWindow, [](GLFWwindow* window, int button, int action, int mods) {
		auto app = reinterpret_cast<Window*>(glfwGetWindowUserPointer(window));
		if (app) app->MouseButtonCallback(window, button, action, mods);
		});

	glfwSetScrollCallback(mGLFWWindow, [](GLFWwindow* window, double xoffset, double yoffset) {
		auto app = reinterpret_cast<Window*>(glfwGetWindowUserPointer(window));
		if (app) app->MouseScrollCallback(window, xoffset, yoffset);
		});

	glfwSetKeyCallback(mGLFWWindow, [](GLFWwindow* window, int key, int scancode, int action, int mods) {
		auto app = reinterpret_cast<Window*>(glfwGetWindowUserPointer(window));
		if (app) app->KeyCallback(window, key, scancode, action, mods);
		});
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
	if (mScene)
		mScene->MouseButtonCallback(this, button, action, mods);
}

void Window::MouseMovementCallback(GLFWwindow* window, double xPos, double yPos)
{
	if (mScene)
		mScene->MouseMovementCallback(this, xPos, yPos);
}

void Window::MouseScrollCallback(GLFWwindow* window, double xOffset, double yOffset)
{
	if (mScene)
		mScene->MouseScrollCallback(this, xOffset, yOffset);
}

void Window::KeyCallback(GLFWwindow* window, int key, int action, int scan, int mods)
{
	if (mScene)
		mScene->KeyCallback(this, key, scan, action, mods);
}

void Window::CharCallback(GLFWwindow* window, unsigned int callpoint)
{
}

void Window::SetWidth(int width)
{
	mWidth = width;
}

void Window::SetHeight(int height)
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