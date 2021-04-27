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

void Tag::addKeyword(std::string newWord)
{
	int found = 0;
	for(int i = 0; i < keywords.size();i++)
	{
		if(newWord==keywords[i])
		{
			found = 1;
			std::cout << "keyword already in this tag's list" << std::endl;
		}
	}
	
	if (found==0)
	{
		keywords.push_back(newWord);
	}
}
