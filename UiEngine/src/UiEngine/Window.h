#pragma once

#include "Core.h"
#include <string>

namespace UiEngine
{
	struct WindowProps
	{
		std::string Title;
		unsigned int Width;
		unsigned int Height;

		WindowProps
		(
			const std::string& title = "UiEngine",
			unsigned int width = 1280,
			unsigned int height = 720
		)
			: Title(title), Width(width), Height(height)
		{
		}
	};

	class UI_API Window
	{
	public:
		virtual ~Window() {};
		virtual void OnUpdate() = 0;
		virtual unsigned int GetWidth() const = 0;
		virtual unsigned int GetHeigth() const = 0;

		static Window* Create(const WindowProps& props = WindowProps());
	};
}