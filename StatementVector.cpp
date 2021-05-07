#include "StatementVector.h"

StatementVector::StatementVector(std::string name)
{
	listName=name;
}

std::string StatementVector::statementVectorToString()
{
    std::stringstream output;
    std::vector<Statement>::iterator iter;
    for (iter = statements.begin(); iter != statements.end(); iter++)
        output << (*iter).to_string();
    return output.str(); 
}

std::vector<Statement> StatementVector::untaggedStatements()
{
    std::vector<Statement> untaggedStatements;
    std::vector<Statement>::iterator iter;
    for (iter = statements.begin(); iter != statements.end(); iter++)
    {
        if ((*iter).getTag() == "")
        untaggedStatements.push_back(*iter);
    }
    return untaggedStatements;
}

std::vector<Statement> StatementVector::taggedStatements(std::string tag)
{
    std::vector<Statement> taggedStatements;
    std::vector<Statement>::iterator iter;
    for (iter = statements.begin(); iter != statements.end(); iter++)
    {
        if ((*iter).getTag() == tag)
        taggedStatements.push_back(*iter);
    }
    return taggedStatements;
}

std::vector<Statement> StatementVector::incomeStatements()
{
    std::vector<Statement> incomeStatements;
    std::vector<Statement>::iterator iter;
    for (iter = statements.begin(); iter != statements.end(); iter++)
    {
        if (std::stod((*iter).getAmount()) > 0)
        incomeStatements.push_back(*iter);
    }
    return incomeStatements;
}

std::vector<Statement> StatementVector::expenseStatements()
{
    std::vector<Statement> expenseStatements;
    std::vector<Statement>::iterator iter;
    for (iter = statements.begin(); iter != statements.end(); iter++)
    {
        if (std::stod((*iter).getAmount()) < 0)
        expenseStatements.push_back(*iter);
    }
    return expenseStatements;
}

double StatementVector::getTotal()
{
    std::vector<Statement>::iterator iter;
    double total = 0;
    for (iter = statements.begin(); iter != statements.end(); iter++)
    {
        total = total + std::stod((*iter).getAmount());
    }
    
    return total;
}
int StatementVector::fileToStatement(std::string filepath)
{
    std::ifstream file(filepath);

	if(!file) {
		std::cerr << "Cannot open file\n";
		return 0;
	}

    std::string line, string;

    getline(file, line);

    std::string date, type, description, checkNmbr, amount, balance;

    while (std::getline(file, line))
    {
		//std::cout << line << std::endl;        
		std::istringstream iline(line);

		getline(iline, string, ',');
        date.assign(string);

		getline(iline, string, ',');
        type.assign(string);

		getline(iline, string, ',');
        description.assign(string);

		getline(iline, string, ',');
        checkNmbr.assign(string);

		getline(iline, string, ',');
        amount.assign(string);

		getline(iline, string);
        balance.assign(string);

        Statement s(date, type, description, checkNmbr, amount, balance);
        statements.push_back(s);
    }
    file.close();
    return 1;
}
std::string StatementVector::getListName()
{
	return listName;
}
std::vector<Statement> StatementVector::getStatements()
{
	return statements;
}
void StatementVector::setStatements(std::vector<Statement> newStatements)
{
	statements=newStatements;
}