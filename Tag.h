#ifndef TAG_H
#define TAG_H

#include <string>
#include <vector>

class Tag
{
protected:
    std::string tagName_;
	std::vector<std::string> keywords;

public:
    Tag(std::string tagName);
    std::string tagToString();
    void addKeyword(std::string newWord);
};

#endif