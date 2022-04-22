#include "Application.h"

#include <iostream>

UiEngine::Application::Application()
{
	std::cout << "Hello From Engine Loop" << std::endl;
}

UiEngine::Application::~Application()
{
}

void UiEngine::Application::Run()
{
	while (true)
	{
	}
}