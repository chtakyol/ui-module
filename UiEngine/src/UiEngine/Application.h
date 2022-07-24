#pragma once

#include <iostream>
#include <string>
#include <GLFW/glfw3.h>
#include <memory>

#include "Core.h"
#include "Window.h"

namespace UiEngine
{
    class UI_API Application
    {
    public:
        Application();
        virtual ~Application();
        virtual void OnUpdate() = 0;
        void Run();
        Window& GetWindow() { return *m_Window; }

    private:
        void Init();
        void ShutDown();

    private:
        std::unique_ptr<Window> m_Window;
        bool m_Running = true;
    };
}
