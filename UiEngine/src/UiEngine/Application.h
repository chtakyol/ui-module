#pragma once

#include "Core.h"

#include <string>
#include <GLFW/glfw3.h>
#include <iostream>

namespace UiEngine
{
    struct UiSpecs
    {
        std::string Name = "Ui Window";
        uint32_t Width = 1600;
        uint32_t Height = 900;
    };

    class UI_API Application
    {
    public:
        Application(const UiSpecs& uiSpecs);
        virtual ~Application();
        void Run();

    private:
        void Init();
        void ShutDown();

    private:
        UiSpecs m_UiSpecs;
        //GLFWwindow* window;
    };

    Application* CreateApplication();
}
