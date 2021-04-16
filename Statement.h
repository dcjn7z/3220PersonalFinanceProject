#ifndef STATEMENT_H
#define STATEMENT_H

#include <string>
#include <vector>
class Statement
{
protected:
    std::string date_;
    std::string type_;
    std::string description_;
    std::string checkNmbr_;
    std::string amount_;
    std::string balance_;
    std::vector<std::string> tags;

public:
    Statement(std::string date, std::string type_, std::string description, std::string checkNmbr, std::string amount, std::string balance);
    std::string to_string();
    
};

#endif