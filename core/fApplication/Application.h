#pragma once

///Includes
#include <memory>

///Class Includes
#include <fApplication/Window.h>
#include <fActor/Scene.h>
#include "fMesh/Mesh.h"

class Application
{
public:
    Application(const Application&) = delete;
    Application(Application&&) = delete;

    static Application* Get();
     
    int Run();

private:
    Application() = default;

    void Init();
    void InitializeGLFW();
    void LoadContent();

    ///Creates a scene with name & window with filled parameters
    Scene mScene{ "Scene" };
    Window mWindow{ "LearnOpenGL", &mScene, 1280, 720 };
};