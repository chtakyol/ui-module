#include "Application.h"

UiEngine::Application::Application(const UiSpecs& uiSpecs)
    : m_UiSpecs(uiSpecs)
{
	std::cout << "Hello From Engine" << std::endl;
    Init();
}

UiEngine::Application::~Application()
{
    ShutDown();
}

void UiEngine::Application::Run()
{
	while (!glfwWindowShouldClose(window))
	{
        glfwSwapBuffers(window);
        glfwPollEvents();
	}
}

void UiEngine::Application::Init()
{
    if (!glfwInit())
        return;

    window = glfwCreateWindow(m_UiSpecs.Width, m_UiSpecs.Height, m_UiSpecs.Name.c_str(), NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(window);
}

void UiEngine::Application::ShutDown()
{
    glfwTerminate();
}
