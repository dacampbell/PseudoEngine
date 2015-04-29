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

void World::updateWorld() {
	for(auto sys : this->systems)
		sys.second->updateSystem();
}

void World::initWorld() {
	for(auto sys : this->systems)
		sys.second->initSystem();
}

TextureManager* World::getTextureManager()
{
	return this->textureManager;
}

void World::setTextureManager(TextureManager* textureManager)
{
	this->textureManager = textureManager;
}

InputManager* World::getInputManager() {
	return this->inputManager;
}

void World::setInputManager(InputManager* inputManager) {
	this->inputManager = inputManager;
}
