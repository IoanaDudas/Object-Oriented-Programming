
#include "UI.h"
#include <iostream>
using namespace std;

int main()
{
    Repository repository = Repository();
    Service service = Service(repository);
    UI ui = UI(service);

    ui.run();
}