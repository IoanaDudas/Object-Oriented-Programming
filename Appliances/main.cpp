#include <iostream>
#include "UI.h"

int main() {

    Controller controller = Controller();
    UI ui = UI(controller);

    ui.run();

    return 0;
}
