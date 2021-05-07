#ifndef MASTRVECT_H
#define MASTRVECT_H

#include <fstream>

#include "Tag.h"
#include "Statement.h"
#include "StatementVector.h"
#include "TagVector.h"

class MasterVector
{
protected:
	std::vector<StatementVector> master;

public:
   	int addMaster(std::string filepath);
    void updateTags();
    void print();
    void addList(std::string listName);
    std::vector<StatementVector> getMasterVector();
};

#endif
