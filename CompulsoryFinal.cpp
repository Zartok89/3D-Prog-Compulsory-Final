// CompulsoryFinal.cpp : Defines the entry point for the application.
//

#include "CompulsoryFinal.h"
#include "core/fApplication/Application.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;

	///Hvordn skal ci calle app?
	Scene mScene{ "Scene" };
	Window mWindow{ "LearnOpenGL", &mScene, 1280, 720 };
	

	


	return mWindow.Tint();
}

