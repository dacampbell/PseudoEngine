//Location Manager Header File
//Created by Duncan Campbell

#ifndef LOCATION_MANAGER_H
#define LOCATION_MANAGER_H

#include "ComponentManager.h"
#include "AssetIO/LocationComponent.h"

class LocationManager : public ComponentManager
{
	public:
		LocationManager();
		~LocationManager();
		
		virtual void updateComponents();
};

#endif