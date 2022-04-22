#pragma once

#include "Core.h"

namespace UiEngine
{
    class UI_API Application
    {
    public:
        Application();
        virtual ~Application();
        void Run();
    };

    Application* CreateApplication();
}
