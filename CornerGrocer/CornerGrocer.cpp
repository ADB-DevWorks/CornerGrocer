#include "FileReader.h"
#include "FileWriter.h"
#include "FrequencyTable.h"
#include "MenuRenderer.h"
#include "Menu.h"



int main()
{
    
    // Initilize classes
    FileReader fileReader;
    FileWriter fileWriter;
    FrequencyTable table;
    MenuRenderer renderer;
    Menu menu;
    
    // Read and write the txt and dat files
    fileReader.ReadFile(table);
    fileWriter.WriteToFile(table);
    
    // Runs program
    menu.SelectOption(table, renderer);  

    return 0;
}


