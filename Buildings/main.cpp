#include <iostream>
#include "UI.h"
#include "test.h"

int main() {
    //test();

    Controller controller = Controller();
    UI ui = UI(controller);

    ui.run();

    return 0;
}
