#include "MasterVector.h"

MasterVector::MasterVector(){}

int MasterVector::fileToStatement(std::string filepath)
{
    std::ifstream file(filepath);

	if(!file) {
		std::cerr << "Cannot open file\n";
		return 0;
	}

    std::string line, string;

    getline(file, line);

    std::string date, type, description, checkNmbr, amount, balance;

    while (std::getline(file, line))
    {
		//std::cout << line << std::endl;        
		std::istringstream iline(line);

		getline(iline, string, ',');
        date.assign(string);

		getline(iline, string, ',');
        type.assign(string);

		getline(iline, string, ',');
        description.assign(string);

		getline(iline, string, ',');
        checkNmbr.assign(string);

		getline(iline, string, ',');
        amount.assign(string);

		getline(iline, string);
        balance.assign(string);

        Statement s(date, type, description, checkNmbr, amount, balance);
        master.push_back(s);
    }
    file.close();
    return 1;
}

void MasterVector::updateTags()
{
	
}

void MasterVector::print()
{
    std::vector<Statement>::iterator iter;

    for (iter = master.begin(); iter != master.end(); iter++)
        std::cout << (*iter).to_string();
}

