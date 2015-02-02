//Location Manager Implementation File
//Created by Duncan Campbell

#include "LocationManager.h"

#include <iostream>

using namespace std;

LocationManager::LocationManager()
{

}

LocationManager::~LocationManager()
{

}

void LocationManager::updateComponents()
{
	for(auto temp : components)
	{
		cout << ((LocationComponent*)(temp.second))->getX() << " " << ((LocationComponent*)(temp.second))->getY() << endl;
	}
}
