#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Transaction.h"
class Account
{
private:
	//Account number
	unsigned int uiAccountNumber;
	//User account Balance
	double dbUserBalance;
	//Transaction List
	std::vector<Transaction> lstTransactionHistory;
public:
	Account(unsigned int accountNumber, double accountBalance);

	// Set Account Balance
	void setAccountBalance(double balance);
	// Get Account Balance
	double getAccountBalance();
	//Method to make Deposit
	void Deposit(double amount);
	//Withdrawal method
	void Withdrawal(double amount);

};

