#include <iostream>
#include "UI.h"

int main() {

    Person person = Person();
    UI ui = UI(person);

    ui.run();

    return 0;
}
