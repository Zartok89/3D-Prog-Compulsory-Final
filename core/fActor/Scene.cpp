#include "Scene.h"
#include "fMesh/Shader.h"
#include "pathDir.h"
#include <GLFW/glfw3.h> 


 Scene::Scene(const std::string& name)
	 :mName(name) {}

 void Scene::LoadContent()
 {
	 //mShader = new Shader(SOURCE_DIRECTORY("assets/shaders/shader.vs"), SOURCE_DIRECTORY("assets/shaders/shader.fs"));
	 0;
 }
 
 void Scene::UnloadContent()
 {
	 delete mShader;
	 mShader = nullptr;
 }

 void Scene::FrameBufferSizeCallback(GLFWwindow* window, int width, int height)
 {
	 glm::perspectiveRH(glm::radians(1.f), 1.f, 1.f, 1.f); 
 }

 void Scene::MouseButtonCallback(GLFWwindow* window, int button, int action, int mods)
 {
 }

 void Scene::MouseMovementCallback(GLFWwindow* window, double xPos, double yPos)
 {
 }

 void Scene::MouseScrollCallback(GLFWwindow* window, double xOffset, double yOffset)
 {
 }

 void Scene::KeyCallback(GLFWwindow* window, int key, int action, int scan, int mods)
 {
 }

 void Scene::CharCallback(GLFWwindow* window, unsigned int callpoint)
 {
 }

 void Scene::Render(float dt)
 {
	 glEnable(GL_DEPTH_TEST);
	 // Bind Shader, only using 1 shader for now

	 mShader->use();
	
	 glDepthFunc(GL_LEQUAL);
 }


