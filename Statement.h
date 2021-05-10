#ifndef STATEMENT_H
#define STATEMENT_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream> 

class Statement
{
protected:
    std::string date_;
    std::string type_;
    std::string description_;
    std::string checkNmbr_;
    std::string amount_;
    std::string balance_;
    std::string tag_;

public:
	//Parameterized Constructor
    Statement(std::string date, std::string type, std::string description, std::string checkNmbr, std::string amount, std::string balance);

	//The to_string method prints out all the information of a statement.
    std::string to_string();

	//Getter function
    std::string getDate();
    std::string getType();
    std::string getDescription();
    std::string getCheckNumber();
    std::string getAmount();
    std::string getBalance();
    std::string getTag();

	//Setter function
    void setTag(std::string newTag);
    
};

#endif
