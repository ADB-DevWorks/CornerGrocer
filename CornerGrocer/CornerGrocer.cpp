#include "FileReader.h"
#include "FrequencyTable.h"
#include "MenuRenderer.h"

#include <iostream>
#include <map>
#include <string>

int main()
{
    
    FileReader fileReader;
    FrequencyTable table;
    MenuRenderer renderer;
    

    fileReader.ReadFile(table);

    renderer.RenderMenu();
    
}


