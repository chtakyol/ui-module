#include "UiScreens.h"

UiScreens::UiScreens()
{
	window_flags |= ImGuiWindowFlags_NoTitleBar;
	window_flags |= ImGuiWindowFlags_NoBackground;
}

void UiScreens::RenderUi()
{
	//ImGui::ShowDemoWindow();

	switch (screenSelection)
	{
	case 0:
		MainScreen();
		break;
	case 1:
		TestGuideScreen();
		break;
	default:
		break;
	}
}

void UiScreens::MainScreen()
{
	ImGui::Begin("Conteiner", NULL, window_flags);
	ImGui::SetWindowSize(ImVec2(800, 480));
	ImGui::SetWindowPos(ImVec2(0, 0));
	ImGui::Dummy(ImVec2(0.0f, 50.0f));
	ImGui::Dummy(ImVec2(5.0f, 0.0f));
	ImGui::SameLine();
	if (ImGui::Button("START TEST", ImVec2(350, 350)))
	{
		std::cout << "Start" << std::endl;
		screenSelection = 1;
	}
	ImGui::SameLine();
	ImGui::Dummy(ImVec2(40.0f, 0.0f));
	ImGui::SameLine();
	if (ImGui::Button("SETTINGS", ImVec2(350, 350)))
	{
		std::cout << "Settings" << std::endl;
	}
	ImGui::End();
}

void UiScreens::TestGuideScreen()
{
	ImGui::Begin("Image Container", NULL, window_flags);
	ImGui::SetWindowSize(ImVec2(800, 280));
	ImGui::SetWindowPos(ImVec2(0, 0));
	//ImGui::Image();
	ImGui::End();

	ImGui::Begin("Button Container", NULL, window_flags);
	ImGui::SetWindowSize(ImVec2(800, 200));
	ImGui::SetWindowPos(ImVec2(0, 280));
	ImGui::Dummy(ImVec2(0.0f, 50.0f));
	// --------------------------------------------------
	ImGui::Dummy(ImVec2(75.0f, 0.0f));
	ImGui::SameLine();
	if (ImGui::Button("OK", ImVec2(250, 100)))
	{
		std::cout << "OK" << std::endl;
	}
	ImGui::SameLine();
	ImGui::Dummy(ImVec2(100.0f, 0.0f));
	ImGui::SameLine();
	if (ImGui::Button("BACK", ImVec2(250, 100)))
	{
		std::cout << "BACK" << std::endl;
		screenSelection = 0;
	}
	ImGui::End();
}
