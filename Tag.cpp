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
		if(input==keywords[i])
		{
			found = 1;
			std::cout << "keyword already in this tag's list" << std::endl;
		}
	}
	
	if (found==0)
	{
		keywords.push_back(input);
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
