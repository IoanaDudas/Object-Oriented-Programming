#include "Validator.h"
#include <string.h>

void Validator::validateStringEmpty(std::string stringToValidate) const
{
    if(stringToValidate.size() == 0)
        throw ValidationEmptyException{ "Error empty variable!\n" };
}

void Validator::validateFilmedAtAllLetters(std::string filmedAt) const
{
    int index;
    std::string numbers = "0123456789";
    for (index = 0; index < filmedAt.length(); ++index)
        if (numbers.find(filmedAt.at(index)) != std::string::npos)
            throw ValidationNumberException{ "Error validating letters!\n" };
}

void Validator::validateDate(Date date) const
{
    int year = date.getYear();
    int month = date.getMonth();
    int day = date.getDay();
    if(year % 4 == 0 and year % 100 == 0 and year % 400 != 0)
    {
        if(month == 2)
            if(day != 29)
                throw ValidationDateException{"Error number of days!\n"};
    }

    if(month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12)
        if(day > 31 or day < 1)
            throw ValidationDateException("Error number of days!\n");
    if(month == 4 or month == 6 or month == 9 or month == 11)
        if(day > 30 or day < 1)
            throw ValidationDateException("Error number of days!\n");
    if(month == 2)
        if(day > 28 or day < 1)
            throw ValidationDateException("Error number of days!\n");
    if(month > 12 or month < 1)
        throw ValidationDateException("Error month!\n");

    if(year < 1000 or year > 9999)
        throw ValidationDateException("Error year!\n");

}

void Validator::validaAccessCount(std::string accessCount) const
{
    int index;
    std::string numbers = "0123456789";
    for (index = 0; index < accessCount.length(); ++index)
        if (numbers.find(accessCount.at(index)) == std::string::npos)
            throw ValidationNumberException{ "Error validating numbers!\n" };
}
