#pragma once
#include <iostream>
#include "Exceptions.h"
#include "Tape.h"

class Validator
{
public:
    //constructor
    Validator() {};

    void validateStringEmpty(std::string stringToValidate) const;

    void validateFilmedAtAllLetters(std::string stringToValidate) const;

    void validateDate(Date date) const;

    void validaAccessCount(std::string accessCount) const;

};

