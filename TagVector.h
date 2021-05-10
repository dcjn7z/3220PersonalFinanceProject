#ifndef TAGVEC_H
#define TAGVEC_H

#include "Tag.h"

class TagVector
{
protected:
	std::vector<Tag> tagList;

public:
	//Default Constructor
    TagVector();

	//The fileToTags method reads in a file to add the list of tags and their keywords.
	//filepath is an std::string type that contains the path to an input file.
    int fileToTags(std::string filepath);

	//The addTag method adds an std::string type parameter tag to a tag list if it is not in the list.
    void addTag(std::string newTag);

	//The searchTag method compares an std::string parameter tag with the tag list and prompts if
	//the tag is already in the list or not.
    int searchTag(std::string searchedTag);

	//The printTags method prints out the tag list.
    void printTags();

	//The printKeywords method prints the tag list and its key words.
    void printKeywords();

	//The addKeywords method adds a key word into the tag of a tag list
    void addKeywords(std::string newKeyword);

	//The getTagList method returns the tag list.
    std::vector<Tag> getTagList();

	//The tagsToFile method outputs to a file the tag list and its key words.
	//filepath is an std::string type that contains the path to an output file.
    int tagsToFile(std::string filepath);
};

#endif
