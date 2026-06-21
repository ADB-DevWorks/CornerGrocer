#pragma once



#include <iostream>
#include <map>
#include <string>


class FrequencyTable
{

public:
	void AddItem(std::string);
	void PrintItemFrequency(std::string item);
	void PrintTable();
	void PrintHistogram();
	bool Contains(std::string item);
	const std::map<std::string, int>& GetTable() const;

private:
	std::map<std::string, int> table;
};


