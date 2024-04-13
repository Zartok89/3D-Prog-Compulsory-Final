#pragma once

///Includes
#include <iostream>
#include <memory>

///CLass Includes
#include "Camera.h"
#include "fMesh/Mesh.h"
#include "fActor/StaticMeshActor.h"
#include "fInterfaces/Controller.h"

class Scene
{
public:	
	Scene(const std::string& name);


	virtual ~Scene() = default;
	Scene(const Scene&) = delete;
	Scene& operator=(const Scene&) = delete;
	Scene(Scene&&) = delete;
	Scene& operator=(Scene&&) = delete;

    void UpdateSceneGraph(Actor* actor, float dt, Transform globalParentTransform = Transform{});

    void Update(float dt);

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


	void BindCamera();

	///Render The Scene and all its content
	void Render(float dt);

	///Update Scene
	///


    void UpdateInputController(float dt);

    std::shared_ptr<IController> mActiveController{ nullptr };

	Camera mSceneCamera{ "SceneCamera" };

private:
	///Actors and controllers
	StaticMeshActor* mCube0{ nullptr };

	class Shader* mShader{ nullptr };


	
	std::shared_ptr<Mesh> mStaticMeshCube { nullptr };
};
