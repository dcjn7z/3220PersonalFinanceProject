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
    Tag(std::string tagName);
    std::string getTagName();
    std::string tagToString();
    void addKeyword();
    void addKeyword(std::string newKeyword);
};

#endif