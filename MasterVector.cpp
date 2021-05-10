#include "MasterVector.h"

int MasterVector::addMaster(std::string filepath)
{
	StatementVector allStatements("AllStatements");
	std::string input;
	int value = allStatements.fileToStatement(filepath);
	while (value==0)
	{
		std::cout << "Error opening file, please enter filepath to statements" << std::endl;
		std::cin >> input;
		value = allStatements.fileToStatement(input);
	}
	master.push_back(allStatements);
	return 1;
}

void MasterVector::updateTags(TagVector tagVector)
{
	std::vector<Statement> newStatements;
	for(int i = 0; i<master.size(); i++)
	{
		newStatements = master[i].getStatements();
		for(int x = 0; x <newStatements.size();x++)
		{
			for(int y = 0; y <tagVector.getTagList().size();y++)
			{
				for(int z = 0; z < tagVector.getTagList()[y].getKeywords().size();z++)
				{
					if(newStatements[x].getDescription().find(tagVector.getTagList()[y].getKeywords()[z])!=std::string::npos)
					{
						newStatements[x].setTag(tagVector.getTagList()[y].getTagName());
					}
				}
			}
		}
		master[i].setStatements(newStatements);
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
			std::cout << "Enter 'T' for a tagged list, 'E' for expense list, 'I' for income list, or 'Q' to stop" << std::endl;
			std::cin>>input;
		}
				
		if(input=="E" || input == "e")
		{
			newList.setStatements(master[0].expenseStatements());
			master.push_back(newList);
			input="q";
		}
		else if(input=="I" || input == "i")
		{
			newList.setStatements(master[0].incomeStatements());
			master.push_back(newList);
			input="q";
		}	
		else 
		{
			std::cout << "Enter 'T' for a tagged list, 'E' for expense list, 'I' for income list, or 'Q' to stop" << std::endl;
			std::cin>>input;
		}
	}
}
std::vector<StatementVector> MasterVector::getMasterVector()
{
	return master;
}

void MasterVector::outputCSV(std::string fileName)
{
	std::ofstream outputFile(fileName);
	std::vector<Statement> currentVector;
	for(int i = 0; i<master.size();i++)
	{
		currentVector = master[i].getStatements();
		outputFile << master[i].getListName() << std::endl;
		outputFile << "Date, Type, Description, Check Number, Amount, Balance " << std::endl;
		for (int x = 0; x<currentVector.size();x++)
		{
	 		outputFile << currentVector[x].getDate() << "," << currentVector[x].getType() << "," << currentVector[x].getDescription() << ","
	 		<< currentVector[x].getCheckNumber() << "," << currentVector[x].getAmount() << "," 
	 		<< currentVector[x].getBalance() << std::endl;
	 	}
	 	outputFile << std::endl;
	}
	outputFile.close();
}
