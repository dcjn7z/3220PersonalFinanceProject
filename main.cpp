//#include "Tag.h"
#include "Statement.h"
#include "StatementVector.h"
#include "MasterVector.h"
//#include "TagVector.h"
#include <iostream>

int main(void)
{
	//char menu = 's';
	std::string input = "";
	MasterVector master;
	//TagVector tags;
	while(input!="q")
	{
		std::cout<<"HI! Enter a filepath to the bank statement file"<<std::endl;
		std::cin>>input;
		master.fileToStatement(input);
		
		/*std::cout<<"Enter a filepath to load tags, or press enter to skip"<<std::endl;
		std::cin>>input;
		
		if(input!=""){
			tags.fileToTags(input);
		}*/
	}
	
	master.print();

	/*while(menu!='q')
	{	
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
				
			case 'O':
			case 'o':
				break;
		}
	}*/
}
