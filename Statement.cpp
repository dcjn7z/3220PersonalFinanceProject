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
std::string Statement::getDate()
{
	return date_;
}
std::string Statement::getType()
{
	return type_;
}
std::string Statement::getDescription()
{
	return description_;
}
std::string Statement::getCheckNumber()
{
	return checkNmbr_;
}
std::string Statement::getAmount()
{
	return amount_;
}
std::string Statement::getBalance()
{
	return balance_;
}
std::string Statement::getTag()
{
	return tag_;
}

void Statement::setTag(std::string newTag)
{
	tag_=newTag;
}

