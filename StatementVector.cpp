#include "StatementVector.h"

StatementVector::StatementVector(){}

std::string StatementVector::statementVectorToString();
{
    std::stringstream output;
    std::vector<Statement>::iterator iter;
    for (iter = statements.begin(); iter != statements.end(); iter++)
        output << (*iter).to_string();
    return output.str(); 
}

std::vector<Statement> StatementVector::untaggedStatements()
{
    std::vector<Statement> untaggedstatements;
    std::vector<Statement>::iterator iter;
    for (iter = master.begin(); iter != master.end(); iter++)
    {
        if ((*iter).tag == "")
        untaggedstatements.push_back(*iter);
    }
    return untaggedstatements;
}

std::vector<Statement> StatementVector::taggedStatements(std::string tag)
{
    std::vector<Statement> taggedstatements;
    std::vector<Statement>::iterator iter;
    for (iter = master.begin(); iter != master.end(); iter++)
    {
        if ((*iter).tag == tag)
        taggedstatements.push_back(*iter);
    }
    return taggedstatements;
}

std::vector<Statement> StatementVector::incomeStatements()
{
    std::vector<Statement> incomestatements;
    std::vector<Statement>::iterator iter;
    for (iter = master.begin(); iter != master.end(); iter++)
    {
        if (std::stod((*iter).amount_) > 0)
        incomestatements.push_back(*iter);
    }
    return incomestatements;
}

std::vector<Statement> StatementVector::expenseStatements()
{
    std::vector<Statement> expensestatements;
    std::vector<Statement>::iterator iter;
    for (iter = master.begin(); iter != master.end(); iter++)
    {
        if (std::stod((*iter).amount_) < 0)
        expensestatements.push_back(*iter);
    }
    return expensestatements;
}