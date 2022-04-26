#include "UiEngine.h"

#include <iostream>


//class UiApp : public UiEngine::Application
//{
//public:
//    UiApp()
//    {
//        std::cout << "Hello From App" << std::endl;
//
//    }
//
//    ~UiApp()
//    {
//
//    }
//
//};

UiEngine::Application* UiEngine::CreateApplication()
{
    UiEngine::UiSpecs spec;

    UiEngine::Application* app = new UiEngine::Application(spec);
    return app;
}