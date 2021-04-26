#include "TagVector.h"

TagVector::TagVector() {}

void TagVector::fileToTags(std::string filename){

	std::ifstream tagFile(filename);
	std::string line; 
	
	getline(tagFile, line);
	std::string tag; 
	
	getline(tagFile, line);
	tag = stoi(line);
	
	if(!tagFile){
		std::cout << "File error. Could not convert." <<std::endl;
	}
	tagFile.close();
}

std::string TagVector::tagVectorToString(){
	std::string tagVectorString;
	//tagVectorString = tagList;
	return tagVectorString; 
}

void TagVector::addTag(std::string newTag){
	newTag = "start";
	int i = 0;
	while( i == 0){
		char newT;
		std::cout << "Enter new tag (s to stop): ";
		std::cin >> newT;
		if(newT == 's'){
			i = 1;
			std::cout << "Program stopped." << std::endl; 
			return;
		}
		this->tagList.push_back(*(new Tag(newTag)));
	}
}

int TagVector::searchTag(std::string searchedTag)
{
	int i = 0;
	while( i < this->tagList.size())
	{
		if (tagList[i].getTagName() == searchedTag)
		 {
			std::cout << searchedTag << " Tag found at " << std::to_string(i) << "." << std::endl;
			return i;
		} 
	i++;
	}
	std::cout << "Tag not found" << std::endl;
	return 0;
}

std::string TagVector::printKeywords()
{
	std::stringstream output;
	int i = 0;
	if( i < this->tagList.size()){
		//output << "" << std::to_string(tagList[i].getTagName()) << std::endl;
		int j = 0;
		if(j < this->tagList.size()) {
			//std::cout << "" << tagList[i] << "" << keywords[j] << std::endl; 
			j++;
		}
	i++;
	}
	return output.str();
}
