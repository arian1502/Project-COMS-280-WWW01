#include "Account.h"
Account::Account(unsigned int accountNumber, double accountBalance = 0)
{
    uiAccountNumber = accountNumber;
    dbUserBalance = accountBalance;
}

void Account::setAccountBalance(double balance)
{
    dbUserBalance = balance; // Setter
}
double Account::getAccountBalance()
{
    return dbUserBalance;
}
void Account::Deposit(double amount) 
{
    dbUserBalance += amount;
    // Create new transaction
    Transaction trans;
    //Add new transaction
    lstTransactionHistory.push_back(trans);
}

void Account::Withdrawal(double amount)
{
    if (amount <= dbUserBalance)
    {
        dbUserBalance -= amount;
        // Create new transaction
        Transaction trans;
        //Add new transaction
        lstTransactionHistory.push_back(trans);
    }
    else
    {
        std::cout << "Insufficient balance." << std::endl;
    }
   
}