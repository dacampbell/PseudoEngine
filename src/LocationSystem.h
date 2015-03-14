//Location Manager Header File
//Created by Duncan Campbell

#ifndef LOCATION_SYSTEM_H
#define LOCATION_SYSTEM_H

#include "ComponentSystem.h"
#include "LocationComponent.h"

class LocationSystem : public ComponentSystem
{
	public:
		LocationSystem();
		~LocationSystem();
		
		virtual void updateComponents();
};

#endif