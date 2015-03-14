//Load System Implementation File
//Created by Duncan Campbell

#include "LoadSystem.h"

#include <iostream>

using namespace std;

LocationComponent* LoadSystem::loadLocationComponent(YAML::Node node)
{
	int id;
	float x, y, angle;
	
	id = node["id"].as<int>();
	x = node["x"].as<float>();
	y = node["y"].as<float>();
	angle = node["angle"].as<float>();
	
	return new LocationComponent(id, x, y, x);
}

LocationSystem* LoadSystem::loadLocationSystem(YAML::Node node)
{
	LocationSystem* sys = new LocationSystem();
	
	for(auto comp : node) {
		sys->addComponent(loadLocationComponent(comp)->getId(), loadLocationComponent(comp));
	}
	
	return sys;
}


World* LoadSystem::loadWorld(YAML::Node node)
{
	//Create a blank world
	World* world = new World();
	
	//Load the world name
	std::string name;
	name = node["name"].as<std::string>();
	
	//Add the systems to the world
	for(auto sys : node["systems"]) {
		std::string systemName = sys["name"].as<std::string>();
		
		//Works magic to load the location system
		if(systemName == "Location System") {
			world->addSystem(loadLocationSystem(YAML::LoadFile(sys["components"].as<std::string>())));
		}
	}
	
	return world;
}
