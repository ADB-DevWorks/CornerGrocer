#pragma once

#include "FrequencyTable.h"
#include "MenuRenderer.h"


class Menu
{
public:
	void SelectOption(FrequencyTable& table, MenuRenderer& renderer);
	void WaitForKeypres();
	
};


