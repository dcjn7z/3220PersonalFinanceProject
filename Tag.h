#ifndef TAG_H
#define TAG_H

#include <fstream>
#include <iostream>
#include <sstream> 
#include <vector>

class Tag
{
protected:
    std::string tagName_;
	std::vector<std::string> keywords;

public:
	//This constructor set a tag name from a std::string name.
    Tag(std::string tagName);

	//Getter function.
    std::string getTagName();

	//The tagToString method print out the list of key words of the tag.
    std::string tagToString();

	//The addKeyword method prompts the user to enter the added key word into the tag.
	//If the key word is not in the tag, it will be added to the tag.
    void addKeyword();

	//The addKeyword method will add the parameter std::string key word if it is not in the tag.
    void addKeyword(std::string newKeyword);

	//The getKeywords method returns the list of key words.
    std::vector<std::string> getKeywords();
};

#endif