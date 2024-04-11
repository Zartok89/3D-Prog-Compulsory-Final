#pragma once

#include <fApplication/Window.h>
#include <fActor/Scene.h>
#include <memory>

class Application
{
public:
    Application(const Application&) = delete;
    Application(Application&&) = delete;

    static Application* Get();
     
    int Run();

    //int Test();

private:
    Application() = default;

    void Init();
    void InitializeGLFW();
    void LoadContent();

    ///Creates a scene with name & window with filled parameters
    Scene mScene{ "Scene" };
    Window mWindow{ "LearnOpenGL", &mScene, 1280, 720 };
};