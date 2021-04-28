#ifndef STATEVECT_H
#define STATEVECT_H

#include "Tag.h"
#include "Statement.h"
#include "MasterVector.h"

class StatementVector
{
protected:
	std::string listName;
	std::vector<Statement> statements;

public:
    StatementVector();
    std::string statementVectorToString();
    std::vector<Statement> untaggedStatements();
    std::vector<Statement> taggedStatements(std::string tag);
    std::vector<Statement> incomeStatements();
    std::vector<Statement> expenseStatements();
    double getTotal();
    
};

#endif
