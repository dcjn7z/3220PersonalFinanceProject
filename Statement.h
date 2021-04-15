#ifndef STATEMENT_H
#define STATEMENT_H

#include <string>
#include <vector>
#include "Tag.h"
class Statement
{
protected:
    std::string date_;
    std::string type_;
    std::string description_;
    std::string checkNmbr_;
    std::string amount_;
    std::string balance_;
    std::vector<Tag::Tag> appliedTagVector;

public:
    Shape(std::string date, std::string type_, std::string description, std::string checkNmbr, std::string amount, std::string balance);
    std::string to_string();
};

#endif