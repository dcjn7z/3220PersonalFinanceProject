#include "Tag.h"

Tag::Tag(std::string tagName){
	this->tagName_ = tagName; 
}

std::string Tag::getTagName()
{
	return this->tagName_;
}

std::string Tag::tagToString(){
	std::stringstream output;
	output << tagName_ << " - \n";
    for (int i = 0; i < keywords.size(); i++)
    {
    	 output << "\t" << keywords[i] << "\n";
    }
	return output.str(); 
}

void Tag::addKeyword()
{
	int found = 0;
	std::string input;
	std::cout<<"Enter the keyword you want to add to this tag"<<std::endl;
	std::cin>>input;
	for(int i = 0; i < keywords.size();i++)
	{
		try{
			if(input==keywords[i])
			{
				found = 1;
				throw std::string("Exception: Duplicate keyword.");
			}
	
			if (found==0)
			{
			keywords.push_back(input);
			std::cout << "Keyword has been added succesfully." << std::endl;
			}
		}
		catch(const std::string &e){
			std::cerr << e << std::endl;
			std::cerr << "Error. Keyword " << keywords[i] << " already exists." << std::endl;
		}
	}
}
void Tag::addKeyword(std::string newKeyword)
{
	int found = 0;
	for(int i = 0; i < keywords.size();i++)
	{
		if(newKeyword==keywords[i])
		{
			found = 1;
			std::cout << "keyword already in this tag's list" << std::endl;
		}
	}
	
	if (found==0)
	{
		keywords.push_back(newKeyword);
	}
}
std::vector<std::string> Tag::getKeywords()
{
	return keywords;
}
