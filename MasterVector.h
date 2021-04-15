#ifndef MASTRVECT_H
#define MASTRVECT_H

#include <string>
#include <vector>
#include "Tag.h"
#include "Statement.h"

class MasterVector
{
protected:
	std::vector<StatementVector::StatementVector> master;

public:
    MasterVector();
    void fileToStatement(std::string filepath);
    
};

#endif