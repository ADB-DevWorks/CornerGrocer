#include "FileReader.h"
#include "FrequencyTable.h"

#include <iostream>
#include <map>
#include <string>

int main()
{
    
    FileReader fileReader;
    FrequencyTable table;

    fileReader.ReadFile(table);

    table.PrintTable();
    
}


