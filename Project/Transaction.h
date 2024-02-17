#pragma once
#include <string>
#include <ctime>
class Transaction
{
private:	
	double dbTransactionAmount; //Transaction amount
	std::string tTransactionType; // Transaction type 
	time_t tmTimestamp; //Transaction execute time.
	unsigned int iTransactionId; // Transaction Identifier
public:
	Transaction(double transactionAmount, std::string transactionType, unsigned int transactionId);
	Transaction();
	std::string getTransactionType();
	time_t getTimestamp();
	double getTransactionAmount();


};

