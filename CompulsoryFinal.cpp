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
	

	return Application::Get()->Run();
}

