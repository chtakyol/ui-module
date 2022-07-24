#include "Application.h"
#include "EntryPoint.h"

namespace UiEngine
{
	Application::Application()
	{
		Init();
	}

	Application::~Application()
	{
		ShutDown();
	}

	void Application::Run()
	{
		while (m_Running)
		{
			m_Window->OnUpdate();
			OnUpdate();
		}
	}

	void Application::Init()
	{
		std::cout << "Hello From Engine" << std::endl;
		m_Window = std::unique_ptr<Window>(Window::Create());
	}

	void Application::ShutDown()
	{

	}
}
