#include "FileReader.h"
#include "FileWriter.h"
#include "FrequencyTable.h"
#include "MenuRenderer.h"
#include "Menu.h"



int main()
{
    
    FileReader fileReader;
    FileWriter fileWriter;
    FrequencyTable table;
    MenuRenderer renderer;
    Menu menu;
    
    fileReader.ReadFile(table);
    fileWriter.WriteToFile(table);
    
    menu.SelectOption(table, renderer);  

    return 0;
}


