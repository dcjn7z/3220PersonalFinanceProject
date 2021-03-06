#include "Tag.h"
#include "Statement.h"
#include "StatementVector.h"
#include "MasterVector.h"
#include "TagVector.h"

int main(int argc, char* argv[])
{
	std::string input = "";
	MasterVector master;
	TagVector tags = TagVector();
	
	if(argc==3)
	{
		master.addMaster(argv[1]);
	
		while(tags.fileToTags(argv[2])==0 && input!="q")
		{
			std::cout<<"Enter a filepath to a tag file, or type 'q' to skip"<<std::endl;
			std::cin>>input;
		}
		std::cout << std::endl;
	}
	
	else if(argc==2)
	{
		master.addMaster(argv[1]);
	
		std::cout<<"Enter a filepath to a tag file, or type 'q' to skip"<<std::endl;
		std::cin>>input;
		while(tags.fileToTags(input)==0 && input!="q")
		{
			std::cout<<"Enter a filepath to a tag file, or type 'q' to skip"<<std::endl;
			std::cin>>input;
		}
		std::cout << std::endl;
	}
	
	else
	{
		std::cout<<"HI! Enter a filepath to the bank statement file"<<std::endl;
		std::cin>>input;
		master.addMaster(input);
		//master.print();
	
		std::cout<<"Enter a filepath to a tag file, or type 'q' to skip"<<std::endl;
		std::cin>>input;
		while(tags.fileToTags(input)==0 && input!="q")
		{
			std::cout<<"Enter a filepath to a tag file, or type 'q' to skip"<<std::endl;
			std::cin>>input;
		}
		std::cout << std::endl;
	}

	input="";
	std::cout<< "Select an Option:('q' to quit)\n\t(A)dd Lists, Tags, or Keywords\n\t(V)iew Lists, Tags, or Keywords\n\t"
			"(U)pdate Tags\n\t(D)isplay all untagged Statements\n\t(S)ave Account\n"<<std::endl;
	std::cin>>input;
	while(input!="q" && input!="Q")
	{	
		if(input=="A" || input=="a")
		{		
			std::cout << "Enter 'L' to add a list, 'T' to add a tag, 'K' to add a keyword, or 'Q' to stop" << std::endl;
			std::cin>>input;
			while(input!="q" && input!="Q")
			{
				if(input=="l" || input == "L")
				{
					std::cout << "Enter a name for the list" << std::endl;
					std::cin>>input;
					master.addList(input);
				}
						
				else if(input=="T" || input== "t")
				{
					std::cout << "Enter a tag to add" << std::endl;
					std::cin>>input;
					tags.addTag(input);
				}
							
				else if(input=="K" || input=="k")
				{
					std::cout << "Enter the tag you want to add to" << std::endl;
					std::cin>>input;
					tags.addKeywords(input);
				}
				std::cout << "Enter 'L' to add a list, 'T' to add a tag, 'K' to add a keyword, or 'Q' to stop" << std::endl;
				std::cin>>input;
			}
		}	
		if(input=="V" || input=="v")
		{
			std::cout << "Enter 'L' to view all lists, 'T' to view all tags, 'K' to view all keywords, or 'Q' to stop" << std::endl;
			std::cin>>input;
			while(input!="q" && input!="Q")
			{
				if(input=="l" || input == "L")
				{
					master.print();
					std::cout << "Type a list name to print out the list, or 'Q' to stop" << std::endl;
					std::cin>>input;
					while(input!="q" && input!="Q")
					{
						for(int i = 0; i<master.getMasterVector().size();i++)
						{
							if(master.getMasterVector()[i].getListName()==input)
							{
								std::cout << master.getMasterVector()[i].statementVectorToString() << std::endl;
							}
						}
						std::cout << "Type a list name to print out the list, or 'Q' to stop" << std::endl;
						std::cin>>input;
					}
				}
						
				else if (input=="T" || input== "t")
				{
					tags.printTags();
				}
							
				else if(input=="K" || input=="k")
				{
					tags.printKeywords();
				}
							
				std::cout << "Enter 'L' to view all lists, 'T' to view all tags, 'K' to view all keywords, or 'Q' to stop" << std::endl;
				std::cin>>input;
			}
		}
		if(input=="U" || input=="u")
		{
			master.updateTags(tags);
		}
		if(input=="D" || input=="d")
		{
			for(int i = 0; i<master.getMasterVector()[0].getStatements().size();i++)
			{
				if(master.getMasterVector()[0].getStatements()[i].getTag()=="")
				{
					std::cout << master.getMasterVector()[0].getStatements()[i].to_string();
				}
			}
		}
		if(input=="S" || input=="s")
		{
			std::cout << "Enter 'M' to save the master vector as a CSV, 'T' to save tags, or 'Q' to stop" << std::endl;
			std::cin>>input;
			while(input!="q" && input!="Q")
			{
				if(input=="M" || input == "m")
				{
					std::cout << "Enter the file name you want to save under" << std::endl;
					std::cin>>input;
					master.outputCSV(input);
				}
				if(input=="T" || input == "t")
				{
					std::cout << "Enter the file name you want to save under" << std::endl;
					std::cin>>input;
					tags.tagsToFile(input);
				}
				std::cout << "Enter 'M' to save the master vector as a CSV, 'T' to save tags, or 'Q' to stop" << std::endl;
				std::cin>>input;
			}
		}
		std::cout<< "Select an Option:('q' to quit)\n\t(A)dd Lists, Tags, or Keywords\n\t(V)iew Lists, Tags, or Keywords\n\t"
			"(U)pdate Tags\n\t(D)isplay all untagged Statements\n\t(S)ave Account\n"<<std::endl;
		std::cin>>input;
	}
	
	return 0;
}
