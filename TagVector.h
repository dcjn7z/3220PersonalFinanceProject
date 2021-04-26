#ifndef TAGVEC_H
#define TAGVEC_H

#include <fstream>
#include <iostream>
#include <sstream> 
#include <sstream>
#include "Tag.h"

class TagVector
{
protected:
	std::vector<Tag> tagList;

public:
    TagVector();
    void fileToTags(std::string filename);
    std::string tagVectorToString();
    void addTag(std::string newTag);
    int searchTag(std::string searchedTag);
    std::string printKeywords();
};

#endif
