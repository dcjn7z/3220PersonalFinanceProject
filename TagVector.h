#ifndef TAGVEC_H
#define TAGVEC_H

#include "Tag.h"

class TagVector
{
protected:
	std::vector<Tag> tagList;

public:
    TagVector();
    int fileToTags(std::string filepath);
    void addTag(std::string newTag);
    int searchTag(std::string searchedTag);
    void printTags();
    void printKeywords();
};

#endif
