#pragma once

#include "UiEngine/Window.h"
#include "Platform/Windows/WindowsWindow.h"
#include "Platform/Linux/LinuxWindow.h"

#ifdef UI_PLATFORM_WINDOWS
namespace UiEngine
{
	Window* Window::Create(const WindowProps& props)
	{
		std::cout << "Windows" << std::endl;
		return new WindowsWindow(props);
	}
}
#elif UI_PLATFORM_LINUX
namespace Teapot
{
	Window* Window::Create(const WindowProps& props)
	{
		std::cout << "Linux" << std::endl;
		return new LinuxWindow(props);
	}
}
#endif