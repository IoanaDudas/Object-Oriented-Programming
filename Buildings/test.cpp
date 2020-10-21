#include "test.h"
#include "Ui.h"
#include <assert.h>
#include <algorithm>

void addBuilding_validInput_returnsTrue()
{
    Controller c = Controller();
    c.addBuilding(new House("b", 2000, "one", false));
    assert(c.getAllBuildings().size() == 1);
}
void addBuilding_duplicateBuilding_returnsFalse()
{
    Controller c = Controller();
    c.addBuilding(new House("b", 2000, "one", false));
    c.addBuilding(new House("b", 2000, "one", false));
    assert(c.getAllBuildings().size() == 1);
}
bool myFunct(Building* b1, Building* b2) { return (b1->getConstructionYear() < b2->getConstructionYear()); }
void testSort()
{
    Controller c = Controller();
    c.addBuilding(new House("b", 2000, "one", false));
    c.addBuilding(new House("c", 1900, "one", false));
    auto v = c.getAllSortedBuildings();
    std::sort(v.begin(), v.end(), myFunct);
    assert(v[0]->getAddress() == "c");
}

void test()
{
    addBuilding_validInput_returnsTrue();
    addBuilding_duplicateBuilding_returnsFalse();
    testSort();
}
