#ifndef MASTRVECT_H
#define MASTRVECT_H

#include <fstream>

#include "Tag.h"
#include "Statement.h"

class MasterVector
{
protected:
	std::vector<Statement> master;

public:
    MasterVector();
    int fileToStatement(std::string filepath);
    void updateTags();
    void print();
};

#endif
