#include "Exceptions.h"

ValidationNumberException::ValidationNumberException(const string& string)
{
    this->message = string;
}

const char* ValidationNumberException::what() const throw()
{
    return this->message.c_str();
}


ValidationDateException::ValidationDateException(const string& string)
{
    this->message = string;
}

const char* ValidationDateException::what() const throw()
{
    return this->message.c_str();
}


ValidationEmptyException::ValidationEmptyException(const string& string)
{
    this->message = string;
}

const char* ValidationEmptyException::what() const throw()
{
    return this->message.c_str();
}


AddException::AddException(const string& string)
{
    this->message = string;
}

const char* AddException::what() const throw()
{
    return this->message.c_str();
}


RemoveException::RemoveException(const string& string)
{
    this->message = string;
}

const char* RemoveException::what() const throw()
{
    return this->message.c_str();
}


UpdateException::UpdateException(const string& string)
{
    this->message = string;
}

const char* UpdateException::what() const throw()
{
    return this->message.c_str();
}


SaveException::SaveException(const string& string)
{
    this->message = string;
}

const char* SaveException::what() const throw()
{
    return this->message.c_str();
}