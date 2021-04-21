#include "TagVector.h"

TagVector::TagVector() {}

void TagVector::fileToTags(std::string filename){
	std::ifstream tagfile(filename);
	std::string line; 
	
	getline(tagfile, line);
	std::string tag; 
	
	getline(tagfile, line);
	tag = stoi(line);
	
	if(!tagfile){
		std::cout << "File error. Could not convert." <<std::endl;
	}
	tagfile.close();
}

std::string TagVector::tagVectorToString(){
	std::string tagVectorString;
	tagVectorString = tagVector;
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
		std::vector<Tag>::iterator iter;
		for (iter = tagList.begin(); iter != tagList.end(); iter++){
			newTag.push_back();
		}
	}
}

int TagVector::searchTag(std::string searchedTag){
	int i = 0;
	while( i < size_t(tagList)){
		if (tagList[i] == Tag) {
			std::cout << " " << Tag.to_string() << "Tag found at " << std::to_string(i) << "." << std::endl;
			return i;
		} 
	i++;
	std::cout << "Tag not found" << std::endl;

	}
}

std::string TagVector::printKeywords(){
	int i = 0;
	if( i < size_t(tagList[i])){
		std::cout << "" << std::to_string(tagList[i].tagName) << std::endl;
		int j = 0;
		if(j < size_t(tagList[j])) {
			//std::cout << "" << tagList[i] << "" << keywords[j] << std::endl; 
			j++;
		}
	i++;
	}
	return;
}
