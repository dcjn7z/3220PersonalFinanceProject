#include "MasterVector.h"

int MasterVector::addMaster(std::string filepath)
{
	StatementVector allStatements("All Statements");
	std::string input;
	while (allStatements.fileToStatement(filepath)==0)
	{
		std::cout << "Error opening file, please enter filepath to statements" << std::endl;
		std::cin >> input;
		allStatements.fileToStatement(input);
	}
	master.push_back(allStatements);
	return 1;
}

void MasterVector::updateTags()
{
	
}

void MasterVector::print()
{
    for (int i =  0; i<master.size();i++)
    {
    	std::cout << master[i].getListName() << std::endl;
    }  
}
void MasterVector::addList(std::string listName)
{
	StatementVector newList(listName);
	std::string input;
	std::cout << "Enter 'T' for a tagged list, 'E' for expense list, 'I' for income list, or 'Q' to stop" << std::endl;
	std::cin >> input;
	while(input!="q" && input!="Q")
			{
				if(input=="T" || input == "t")
				{
					std::cout << "Enter a tag to make a list" << std::endl;
					std::cin>>input;
					newList.setStatements(master[0].taggedStatements(input));
					master.push_back(newList);
				}
						
				std::cout << "Enter 'T' for a tagged list, 'E' for expense list, 'I' for income list, or 'Q' to stop" << std::endl;
				std::cin>>input;
				//std::cout << "Input = " << input << std::endl;
			}
}
std::vector<StatementVector> MasterVector::getMasterVector()
{
	return master;
}
