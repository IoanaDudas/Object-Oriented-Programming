
#include "Tape.h"
#include <string>

Date::Date() : day(1), month(1), year(2000) {}

Date::Date(const int day, const int month, const int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

int Date::getDay() const
{
    return this->day;
}
int Date::getMonth() const
{
    return this->month;
}
int Date::getYear() const
{
    return this->year;
}
void Date::setDay(const int day)
{
    this->day = day;
}
void Date::setMonth(const int month)
{
    this->month = month;
}
void Date::setYear(const int year)
{
    this->year = year;
}
std::string Date::toString()
{
    if(this->day >= 10 && this->month >= 10)
    {
        return std::to_string(this->getDay()) + "-" + std::to_string(this->getMonth()) + "-" +std::to_string(this->getYear());
    }
    if(this->day < 10 && this->month >= 10)
    {
        return "0" + std::to_string(this->getDay()) + "-" + std::to_string(this->getMonth()) + "-" +std::to_string(this->getYear());
    }
    if(this->day >= 10 && this->month < 10)
    {
        return std::to_string(this->getDay()) + "-0" + std::to_string(this->getMonth()) + "-" +std::to_string(this->getYear());
    }
    if(this->day < 10 && this->month < 10)
    {
        return "0" + std::to_string(this->getDay()) + "-0" + std::to_string(this->getMonth()) + "-" +std::to_string(this->getYear());
    }
}


Tape::Tape() : title(""), filmedAt(""), creationDate(1, 1, 2000), accessCount(0), footagePreview("") {}

Tape::Tape(const std::string& title, const std::string& filmedAt, const Date creationDate, const int accessCount, const std::string& footagePreview)
{
    this->title = title;
    this->filmedAt = filmedAt;
    this->creationDate = creationDate;
    this->accessCount = accessCount;
    this->footagePreview = footagePreview;
}

std::string Tape::getTitle() const
{
    return this->title;
}
std::string Tape::getFilmedAt() const
{
    return this->filmedAt;
}
Date Tape::getCreationDate() const
{
    return this->creationDate;
}
int Tape::getAccessCount() const
{
    return this->accessCount;
}
std::string Tape::getFootagePreview() const
{
    return this->footagePreview;
}

void Tape::setTitle(const std::string &title)
{
    this->title = title;
}
void Tape::setFilmedAt(const std::string &filmedAt)
{
    this->filmedAt = filmedAt;
}
void Tape::setCreationDate(const Date creationDate)
{
    this->creationDate = creationDate;
}
void Tape::setAccessCount(const int accessCount)
{
    this->accessCount = accessCount;
}
void Tape::setFootagePreview(const std::string &footagePreview)
{
    this->footagePreview = footagePreview;
}
std::string Tape::toString()
{
    return this->getTitle() + ", " + this->getFilmedAt() + ", " + this->getCreationDate().toString() + ", " + std::to_string(this->getAccessCount()) + ", " + this->getFootagePreview();}

std::vector<string> tokenize(string str, char delimiter)
{
    vector <string> result;
    stringstream ss(str);
    string token;
    while (getline(ss, token, delimiter))
        result.push_back(token);

    return result;
}

std::istream & operator>>(std::istream & inputStream, Tape & tape)
{
    string line;
    getline(inputStream, line);

    vector<string> tokens = tokenize(line, ',');
    if (tokens.size() != 5)
        return inputStream;
    tape.setTitle(tokens[0]);
    tape.setFilmedAt(tokens[1]);
    vector<string> dateTokens = tokenize(tokens[2], '-');
    int day = stoi(dateTokens[0]);
    int month = stoi(dateTokens[1]);
    int year = stoi(dateTokens[2]);
    tape.setCreationDate(Date(day, month, year));
    tape.setAccessCount(stoi(tokens[3]));
    tape.setFootagePreview(tokens[4]);

    return inputStream;
}

std::ostream & operator<<(std::ostream & outputStream, const Tape & tape)
{
    outputStream << tape.getTitle() << ", " << tape.getFilmedAt() << ", " << tape.getCreationDate().toString() << ", " << tape.getAccessCount() << ", " << tape.getFootagePreview()<< "\n";
    return outputStream;}