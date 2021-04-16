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
    std::vector<Statement::Statement> untaggedStatements();
    std::vector<Statement::Statement> taggedStatements(std::string tag);
    std::vector<Statement::Statement> incomeStatements();
    std::vector<Statement::Statement> expenseStatements();
    double getTotal();
    
};

#endif