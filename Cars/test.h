#pragma once

#include "Service.h"
#include <assert.h>

void getNumberOfCars_validInput_correctResult()
{
    Service s = Service();
    s.setFilename("file.txt");
    string name = "Fiat";
    int number = s.numberOfCars(name);
    assert(number == 3);
}

void getNumberOfCars_validInput_incorrectResult()
{
    Service s = Service();
    s.setFilename("file.txt");
    string name = "Fiat";
    int number = s.numberOfCars(name);
    assert(number != 2);
}

void testAll()
{
    getNumberOfCars_validInput_correctResult();
    getNumberOfCars_validInput_incorrectResult();
}