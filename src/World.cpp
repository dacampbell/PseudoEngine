//World Implementation File
//Created by Duncan Campbell

#include "World.h"

void World::addSystem(System* system) {
	this->systems.push_back(system);
}

void World::updateSystems() {
	for(auto sys : this->systems)
		sys->updateComponents();
}