#include "Scene.h"

///Includes
#include <memory>

///Class Includes
#include "fMesh/Shader.h"
#include "misc/pathDir.h"
#include "fMesh/Mesh.h"
#include "fInterfaces/Render.h"
#include "Actor.h"


///OPenGL includes
#include <GLFW/glfw3.h> 



 Scene::Scene(const std::string& name)
	 {}

 void Scene::LoadContent()
 {
	

	mShader = new Shader(SOURCE_DIRECTORY("assets/shaders/shader.vs"), SOURCE_DIRECTORY("assets/shaders/shader.fs"));
	mCube0 = new StaticMeshActor("Cube0", Mesh::CreateCube()); 
	mCube0->SetLocalPosition({ 0.f,10.f,0.f });

	//mStaticMeshCube = std::make_shared<Mesh>();
	//mStaticMeshCube->CreateCube();
 }
 
 void Scene::UnloadContent()
 {
	 delete mShader;
	 mShader = nullptr;
	 delete mCube0;
	 mCube0 = nullptr;

	
 }

 void Scene::FrameBufferSizeCallback(Window* window, int width, int height)
 {
	 static_cast<float>(width) / static_cast<float>(height);
 }

 void Scene::MouseButtonCallback(Window* window, int button, int action, int mods)
 {
 }

 void Scene::MouseMovementCallback(Window* window, double xPos, double yPos)
 {
 }

 void Scene::MouseScrollCallback(Window* window, double xOffset, double yOffset)
 {
 }

 void Scene::KeyCallback(Window* window, int key, int action, int scan, int mods)
 {
 }

 void Scene::CharCallback(Window* window, unsigned int callpoint)
 {
 }

 void Scene::Render(float dt)
 {
	 glEnable(GL_DEPTH_TEST);
	 // Bind Shader, only using 1 shader for now

	mCube0->Draw(mShader);

	 mShader->use();
	
	 glDepthFunc(GL_LEQUAL);
 }


