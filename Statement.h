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
    //std::vector<std::string> tags;
    std::string tag_;

public:
    Statement(std::string date, std::string type, std::string description, std::string checkNmbr, std::string amount, std::string balance);
    std::string to_string();
    std::string getDate();
    std::string getType();
    std::string getDescription();
    std::string getCheckNumber();
    std::string getAmount();
    std::string getBalance();
    std::string getTag();
    void setTag(std::string newTag);
    
};

#endif
