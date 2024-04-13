// CompulsoryFinal.cpp : Defines the entry point for the application.
//

#include "CompulsoryFinal.h"
#include "core/fApplication/Application.h"
#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <stb_image.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <iostream>


using namespace std;

int main()
{
	cout << "Hello CMake." << endl;

	///Hvordn skal ci calle app?
	

	return Application::Get()->Run();
}

