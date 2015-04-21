//Location Manager Header File
//Created by Duncan Campbell

#ifndef LOCATION_SYSTEM_H
#define LOCATION_SYSTEM_H

#include "System.h"
#include "LocationComponent.h"

class LocationSystem : public System {
	public:
		LocationSystem() { }
		~LocationSystem() { }
		
		virtual void initSystem();
		virtual void updateSystem();
};

#endif