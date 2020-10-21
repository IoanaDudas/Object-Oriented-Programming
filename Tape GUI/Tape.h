#pragma once

#include <iostream>
#include <vector>
#include <string.h>
#include <sstream>

using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
public:

    //default constructor
    Date();

    //constructor with parameters
    Date(const int day, const int month, const int year);

    //getters
    int getDay() const;

    int getMonth() const;

    int getYear() const;

    //setters
    void setDay(const int day);

    void setMonth(const int month);

    void setYear(const int year);

    //converts the info of a tape into a string
    std::string toString();
};

class Tape
{
private:
    std::string title;
    std::string filmedAt;
    Date creationDate;
    int accessCount;
    std::string footagePreview;
public:

    //default constructor
    Tape();

    //constructor with parameters
    Tape(const std::string& title, const std::string& filmedAt, const Date creationDate, const int accessCount, const std::string& footagePreview);

    //getters
    std::string getTitle() const;

    std::string getFilmedAt() const;

    Date getCreationDate() const;

    int getAccessCount() const;

    std::string getFootagePreview() const;

    //setters
    void setTitle(const std::string& title);

    void setFilmedAt(const std::string& filmedAt);

    void setCreationDate(const Date creationDate);

    void setAccessCount(const int accessCount);

    void setFootagePreview(const std::string& footagePreview);

    //converts the info of a tape into a string
    std::string toString();

    friend std::vector<string> tokenize(string str, char delimiter);

    friend std::istream & operator>>(std::istream & inputStream, Tape & tape);

    friend std::ostream & operator<<(std::ostream & outputStream, const Tape & tape);

};