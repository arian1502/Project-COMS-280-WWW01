#pragma once
#include "Account.h"
class User
{
private:
    //User Username
    std::string strUsername;
    //User password
    std::string strPassword;
    //User Name
    std::string strName;
    //User Last Name
    std::string strLastName;
    //User identifier
    int intUserId;
    

public:
    User( std::string uname, std::string pwd, std::string name, std::string lastName, int balance);

    // Get User username
    std::string getUsername() const;

    // Get User Name
    std::string getName() const;

    // Get User Lastname
    std::string getLastname() const;

    // Get Account Balance
    int getUserId() const;

    // Check password
    bool checkPassword(const std::string pwd) const; 
    
};

