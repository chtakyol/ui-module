#pragma once

#include <iostream>

#include "imgui.h"

class UiScreens
{
public:
	UiScreens();
	void RenderUi();
private:
	void MainScreen();
	void TestGuideScreen();

	int screenSelection = 0;

	ImGuiWindowFlags window_flags = 0;
};