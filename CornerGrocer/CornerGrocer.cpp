#include "FileReader.h"
#include "FrequencyTable.h"
#include "MenuRenderer.h"
#include "Menu.h"

#include <iostream>
#include <map>
#include <string>

int main()
{
    
    FileReader fileReader;
    FrequencyTable table;
    MenuRenderer renderer;
    Menu menu;
    
    fileReader.ReadFile(table);

    
    menu.SelectOption(table, renderer);

   

}


