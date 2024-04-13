#pragma once

///Includes
//Imgui
//#include <imgui.h>
//#include <imgui_impl_glfw.h>
//#include <imgui_impl_opengl3.h>


//standard lib
#include <iostream>

class Scene;

class Window
{

///Window Constructor
public:
	Window(std::string name, Scene* scene, int width, int height);
	~Window();


	///Default members
private:
	///Constructor default members
	std::string mName;
	int mWidth {800}, mHeight {600};
	Scene* mScene{ nullptr };
	struct GLFWwindow* mGLFWWindow{ nullptr };

public:
    ///Functions

	///Initializes the window class and all its operations
	void Init();

	///Loads Content
	bool LoadContent();

    void Update(float dt);

	///Controls two factors in the render loop-->Apllication->run()
	///The functions are ordered after the chain of events
	//Begin render
	void gl_Pollevents();

	//Rendering the window 
	void Render(float dt); 

	//Stop Render
	void gl_SwapBuffers();

	///Register Callbacks: Must be operatabel for the program to work
	void RegisterWindowCallbacks();

	///Set the scene member to Scene pointer
	void SetScene(Scene* scene);

	///Checks if Window should close
	bool IsClosed();

	///To do: need frambuffer from scene. Scene need from IOCntroller
	//Callback Functions
	void FrameBufferSizeCallback(struct GLFWwindow* window, int width, int height);
	void MouseButtonCallback(struct GLFWwindow* window, int button, int action, int mods);
	void MouseMovementCallback(GLFWwindow* window, double xPos, double yPos);
	void MouseScrollCallback(struct GLFWwindow* window, double xOffset, double yOffset);
	void KeyCallback(struct GLFWwindow* window, int key, int action, int scan, int mods);
	void CharCallback(struct GLFWwindow* window, unsigned int callpoint);

	//Setters
	void SetWidth(int width);
	void SetHeight(int height);


	// Getters
	int GetWidth() const;
	int GetHeight() const;
	struct GLFWwindow* GetGLFWWindow() const { return mGLFWWindow; }

};
  