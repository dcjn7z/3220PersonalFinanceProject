#include "TagVector.h"

TagVector::TagVector(){}

int TagVector::fileToTags(std::string filepath)
{

	std::ifstream file(filepath);

	if(!file) {
		std::cerr << "Cannot open file\n";
		return 0;
	}

    std::string line, string;

    getline(file, line);
	
    std::string name, tag;
	//std::cout << line << std::endl;  
	
	std::istringstream iline(line);      
	getline(iline,string, ',');
	while(getline(iline,string,','))
	{
		this->tagList.push_back(Tag(string));
	}
	//getline(iline,string, ',');
	
	int index=0;
	while (std::getline(file, line))
    	{
		std::cout << line << std::endl;
		std::istringstream iline(line);    
		getline(iline, string, ',');
		while(getline(iline, string, ','))
		{
       		this->tagList[index].addKeyword(string);
       	}
       index++;
       }
    file.close();
    return 1;
}

void TagVector::addTag(std::string newTag)
{
	int found = 0;
	for(int i = 0; i < tagList.size() ;i++)
	{
		try{
			if(newTag==tagList[i].getTagName())
			{
				found = 1;
				throw std::string("Exception: Duplicate Tag.");
			}
			if (found == 0){
				tagList.push_back(newTag);
				std::cout << "New tag has been added succesfully." << std::endl;
			}
		}
		catch(const std::string &e){
			std::cerr << e << std::endl;
			std::cerr << "Error. Tag " << newTag << " already exists." << std::endl;
		}
	}
}

int TagVector::searchTag(std::string searchedTag)
{
	for(int i = 0; i < tagList.size(); i++)
	{
		try{
			if(tagList.size() == 0){
				throw std::string("Exception: Tag List is empty.");
			}
			else if (tagList[i].getTagName() == searchedTag){
				std::cout << searchedTag << " Tag found at " << std::to_string(i) << "." << std::endl;
				return i;
			}
		}	 
		catch(const std::string &e){
			std::cerr << e << std::endl;
		}
	}
	std::cout << "Tag not found" << std::endl;
	return 0;
}

void TagVector::printTags()
{
	std::stringstream output;
	output << "TAGS:\n";
	
	for (int i = 0; i < tagList.size(); i++)
   	{
    		output <<  tagList[i].getTagName() << ", ";
    	}
	std::cout <<  output.str() << std::endl;
}

void TagVector::printKeywords()
{
	std::stringstream output;
	output << "TAGS:\n";
   	
   	for (int i = 0; i < tagList.size(); i++)
    	{
    		output <<  tagList[i].tagToString();
    	}
	std::cout <<  output.str() << std::endl;
}
 
void TagVector::addKeywords(std::string newKeyword)
 {
 	std::string input;
 	tagList[searchTag(newKeyword)].addKeyword();
 }
 std::vector<Tag> TagVector::getTagList()
 {
 	return tagList;
 }
