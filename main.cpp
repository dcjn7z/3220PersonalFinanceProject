#include "Tag.h"
#include "Statement.h"
#include "StatementVector.h"
#include "MasterVector.h"
#include <iostream>

int main(void)
{
	char menu = 's';
	std::string input;
	MasterVector master;
	std::vector<Tag::Tag> tagsList;
	while(menu!='q')
	{
		std::cout<<"HI! Please Select an Option ('q' to quit)\n\t(C)reate New Account\n\t(L)oad Account\n"<<std::endl;
		switch(menu)
		{
			case 'C':
			case 'c':
				std::cout<<"Enter a filepath to bank statements"<<std::endl;
				std::cin << input << std::endl;
				master.fileToStatement(input); 
				break;
			case 'L':
			case 'l':
				std::cout<<"Enter a filepath to bank statements"<<std::endl;
				std::cin << input << std::endl;
				master.fileToStatement(input);
				std::cout<<"Enter a filepath to tags list"<<std::endl;
				//loadtags to tagsList
				break;
		}
		
		std::cout<< "Select an Option:('q' to quit)\n\t(V)iew Lists, Tags, or Keywords\n\t(A)dd Lists, Tags, or Keywords\n\t"
			"(U)pdate Tags\n\t(D)isplay all untagged Statements\n\t(S)ave Account\n \t(O)utput Something\n"<<std::endl;
		
		switch(menu)
		{
			case 'V':
			case 'v':
				break;
				
			case 'A':
			case 'a':
				break;
				
			case 'U':
			case 'u':
				break;
				
			case 'D':
			case 'd':
				break;
				
			case 'S':
			case 's':
				break;
				
			case 'O'
			case 'o'
				break;
		}
	}
}