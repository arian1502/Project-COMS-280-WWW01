#include "User.h"
User::User(std::string uname, std::string pwd, std::string name, std::string lastName, int balance = 0)
{
    strUsername = uname;
    strPassword = pwd;
    strName = name;
    strLastName = lastName;
    intUserId += 1;
}

std::string User::getUsername() const {
    return strPassword;
}

bool User::checkPassword(const std::string pwd) const
{
    if (strPassword == pwd)
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::string User::getName() const
{
    return strName;
}

std::string User::getLastname() const
{
    return strLastName;
}

int User::getUserId() const
{
    return intUserId;
}
