#pragma once

#include <iostream>


class Scene
{
public:	
	Scene(const std::string& name);

	std::string mName;
	//SceneGraph mSceneGraph;

	///Load/Unload all content of a scene: models, materials, textures etc
	void LoadContent();
	void UnloadContent();

	// Callbacks for window events
	///To do: need frambuffer from scene. Scene need from IOCntroller
	void FrameBufferSizeCallback(struct GLFWwindow* window, int width, int height);
	void MouseButtonCallback(struct GLFWwindow* window, int button, int action, int mods);
	void MouseMovementCallback(GLFWwindow* window, double xPos, double yPos);
	void MouseScrollCallback(struct GLFWwindow* window, double xOffset, double yOffset);
	void KeyCallback(struct GLFWwindow* window, int key, int action, int scan, int mods);
	void CharCallback(struct GLFWwindow* window, unsigned int callpoint);

	///Render The Scene and all its content
	void Render(float dt);

private:
	class Shader* mShader{ nullptr };
};