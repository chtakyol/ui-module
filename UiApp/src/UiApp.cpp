#include "UiEngine.h"

class UiApp : public UiEngine::Application
{
public:
    UiApp()
    {
        std::cout << "Hello From App" << std::endl;
    }

    ~UiApp()
    {

    }

    void OnUpdate() override
    {
        std::cout << "Loop" << std::endl;
    }
};

int main()
{
    UiApp* ui = new UiApp();
    ui->Run();
    ui->OnUpdate();
    delete(ui);
}