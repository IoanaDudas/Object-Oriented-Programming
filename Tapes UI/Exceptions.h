#pragma once
#include <iostream>

using namespace std;

class ValidationNumberException : public std::exception
{
private:
    string message;

public:
    ValidationNumberException(const string& string);

    const char* what() const throw() override;
};


class ValidationDateException : public std::exception
{
private:
    string message;

public:
    ValidationDateException(const string& string);

    const char* what() const throw() override;
};


class ValidationEmptyException : public std::exception
{
private:
    string message;

public:
    ValidationEmptyException(const string& string);

    const char* what() const throw() override;
};


class AddException : public std::exception
{
private:
    string message;

public:
    AddException(const string& string);

    const char* what() const throw() override;
};


class RemoveException : public std::exception
{
private:
    string message;

public:
    RemoveException(const string& string);

    const char* what() const throw() override;
};


class UpdateException : public std::exception
{
private:
    string message;

public:
    UpdateException(const string& string);

    const char* what() const throw() override;
};


class SaveException : public std::exception
{
private:
    string message;

public:
    SaveException(const string& string);

    const char* what() const throw() override;
};