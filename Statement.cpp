#include "Statement.h"

Statement::Statement(std::string date, std::string type, std::string description, std::string checkNmbr, std::string amount, std::string balance)
{
	this->date_=date;
	this->type_=type;
	this->description_=description;
	this->checkNmbr_=checkNmbr;
	this->amount_=amount;
	this->balance_=balance;
}

std::string Statement::to_string()
{
	std::string statementString;

    statementString = "Date: " + date_ + ", " +
                    "Type: " + type_ + ", " +
                    "Description: " + description_ + ", " +
                    "Check #: " + checkNmbr_ + ", " + 
                    "Amount: " + amount_ + ", " + 
                    "Balance: " + balance_ + "\n";
    return statementString;
}
