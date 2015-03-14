//World Header File
//Created by Duncan Campbell

#ifndef WORLD_H
#define WORLD_H

#include <vector>

#include "System.h"

class World {
	public:
		World() {};
		~World() {};
		
		void addSystem(System* system);
		
		void updateSystems();
		
	private:
		std::vector<System*> systems;
};

#endif