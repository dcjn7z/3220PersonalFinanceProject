#include "Tag.h"

Tag::Tag(std::string tagName){
	this->tagName_ = tagName; 
}

std::string Tag::getTagName()
{
	return this->tagName_;
}

std::string Tag::tagToString(){
	std::string tagString;
	tagString = tagName_; 
	return tagString; 
}

//still need to search through list to add new word
void Tag::addKeyword(std::string newWord)
{
	int i = 0;
	while (i == 0)
	{
		std::cout << "Select a tag: ";
		std::string tagA;  
		std :: cin >> tagA; 
		//int index = 0;
		//newWord = searchTag(tagList, tagA);
		/*if (newWord != NULL){
			index = newWord;
			i = 1;
		}*/
	
		int j = 0;
		if( j == 0)
		{
			char key; 
			std::cout << "Enter keyword(s) for selected tag (s to stop): ";
			std::cin >> key; 
			if( key == 's')
			{
				j = 1;
			}
			else
			{
				//keywords.push_back(key);
			}
		}
	}
}
