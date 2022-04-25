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
    bool show_demo_window = true;
	while (!glfwWindowShouldClose(window))
	{
        ImGui::ShowDemoWindow(&show_demo_window);
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

    // Setup Dear ImGui context
    const char* glsl_version = "#version 130";
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    ImGui::StyleColorsDark();
    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init(glsl_version);
}

void UiEngine::Application::ShutDown()
{
    glfwTerminate();
}
