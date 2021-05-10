#ifndef STATEVECT_H
#define STATEVECT_H

#include "Tag.h"
#include "Statement.h"

class StatementVector
{
protected:
	std::string listName;
	std::vector<Statement> statements;

public:
	//Parameterized Constructor 
    StatementVector(std::string name);

	//The statementVectorToString method prints a statement vector.
    std::string statementVectorToString();

	//The untaggedStatements method returns an untagged statement vector.
    std::vector<Statement> untaggedStatements();

	//The taggedStatements method returns a statement vector of a tag.
    std::vector<Statement> taggedStatements(std::string tag);

	//The incomeStatements method returns an income statement vector.
    std::vector<Statement> incomeStatements();

	//The expenseStatements method returns an expense statement vector.
    std::vector<Statement> expenseStatements();

	//The getTotal method returns total amount of the statement vector.
    double getTotal();

	//The fileToStatements method reads in a file to add the statement vector.
	//filepath is an std::string type that contains the path to an input file.
    int fileToStatement(std::string filepath);
 
 	//Getter functions
    std::string getListName();
    std::vector<Statement> getStatements();

	//Setter function
    void setStatements(std::vector<Statement> newStatements);
};

#endif
