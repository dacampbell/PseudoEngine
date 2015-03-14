//Location Manager Implementation File
//Created by Duncan Campbell

#include "LocationSystem.h"

#include <iostream>

void LocationSystem::updateComponents()
{
	for(auto temp : components)
	{
		std::cout << ((LocationComponent*)(temp.second))->getX() << " " << ((LocationComponent*)(temp.second))->getY() << std::endl;
	}
}
