#pragma once

///Includes
#include <iostream>
#include <memory>

///CLass Includes
#include "fMesh/Mesh.h"
#include "fActor/MeshActor.h"




class Scene
{
public:	
	Scene(const std::string& name);


	virtual ~Scene() = default;
	Scene(const Scene&) = delete;
	Scene& operator=(const Scene&) = delete;
	Scene(Scene&&) = delete;
	Scene& operator=(Scene&&) = delete;

	//SceneGraph mSceneGraph;

	///Load/Unload all content of a scene: models, materials, textures etc
	virtual void LoadContent();
	virtual void UnloadContent();

	// Callbacks for window events
	///To do: need frambuffer from scene. Scene need from IOCntroller
	void FrameBufferSizeCallback(class Window* window, int width, int height);
	void MouseButtonCallback(class Window* window, int button, int action, int mods);
	void MouseMovementCallback(class Window*, double xPos, double yPos);
	void MouseScrollCallback(class Window* window, double xOffset, double yOffset);
	void KeyCallback(class Window* window, int key, int action, int scan, int mods);
	void CharCallback(class Window* window, unsigned int callpoint);

	///Render The Scene and all its content
	void Render(float dt);

	///Update Scene 


private:
	///Actors and controllers
	MeshActor* mCube0{ nullptr };

	class Shader* mShader{ nullptr };


	
};