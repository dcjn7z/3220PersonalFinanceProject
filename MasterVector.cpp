#include "MasterVector.h"

int MasterVector::addMaster(std::string filepath)
{
	StatementVector allStatements("AllStatements");
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

void MasterVector::updateTags(TagVector tagVector)
{
	for(int i = 0; i<master.size(); i++)
	{
		for(int x = 0; x <master[i].getStatements().size();x++)
		{
			for(int y = 0; y <tagVector.getTagList().size();y++)
			{
				for(int z = 0; z < tagVector.getTagList()[y].getKeywords().size();z++)
				{
					if(master[i].getStatements()[x].getDescription().find(tagVector.getTagList()[y].getKeywords()[z])!=std::string::npos)
					{
						master[i].getStatements()[x].setTag(tagVector.getTagList()[y].getTagName());
						std::cout << "Here " <<  x << " " << y << " " << z << " " << master[i].getStatements()[x].getDescription() << std::endl;
					}
				}
			}
		}
	}
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
