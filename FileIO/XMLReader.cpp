#include "XMLReader.h"



XMLReader::XMLReader()
{
}


XMLReader::~XMLReader()
{
}

void XMLReader::loadFromFile(std::string filename)
{
	std::ifstream inFile(filename);


	if (!inFile) {
		throw "Could not load File: " + filename;
	}

	std::string xmlDump;

	std::string line;
	while (std::getline(inFile, line)) {
		xmlDump += line;
	}
	std::vector<char> xmlData;
	xmlData = std::vector<char>(xmlDump.begin(), xmlDump.end());
	xmlData.push_back('\0');
}
