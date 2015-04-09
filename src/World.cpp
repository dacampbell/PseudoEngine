//World Implementation File
//Created by Duncan Campbell

#include <map>
#include <string>

#include "World.h"
#include "System.h"

void World::addSystem(std::string name, System* system) {
	this->systems.emplace(name, system);
}

System* World::getSystem(std::string systemName) {
	return this->systems.at(systemName);
}

void World::updateSystems() {
	for(auto sys : this->systems)
		sys.second->updateComponents();
}

Luna::TextureManager* World::getTextureManager()
{
	return this->manager;
}

void World::setTextureManager(Luna::TextureManager* textureManager)
{
	this->manager = textureManager;
}
