#pragma once
#include <string>
#include <fstream>
#include <vector>
class XMLReader
{
public:
	XMLReader();
	~XMLReader();

	void loadFromFile(std::string filename);



};

