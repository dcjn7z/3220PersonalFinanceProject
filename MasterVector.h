#ifndef MASTRVECT_H
#define MASTRVECT_H

#include "Tag.h"
#include "Statement.h"
#include "StatementVector.h"
#include "TagVector.h"

class MasterVector
{
protected:
	std::vector<StatementVector> master;

public:
	//The addMaster method reads in a file to add the statement vectors of the master vector.
	//filepath is an std::string type that contains the path to an input file.
   	int addMaster(std::string filepath);

	//The updateTags method sets the statements of the tag vector.
    void updateTags(TagVector tagVector);

	//The print method prints out the statement vectors of the master vector.
    void print();

	//The addList method prompts the user to add either a tag list, an expense list or an income list into the master vector.
    void addList(std::string listName);

	//Getter function
    std::vector<StatementVector> getMasterVector();

	//The outputCSV method outputs to a file the statement vectors of the master vector.
	//fileName is an std::string type that contains the path to an output file.
    void outputCSV(std::string fileName);
};

#endif
