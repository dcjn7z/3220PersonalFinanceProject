#ifndef STATEVECT_H
#define STATEVECT_H

#include <string>
#include <vector>
#include "Tag.h"
#include "Statement.h"

class StatementVector
{
protected:
	std::string listName;
	std::vector<Statement::Statement> statements;

public:
    StatementVector();
    std::string statementVectorToString();
    void fileToStatement(std::string filepath);
    
};

#endif