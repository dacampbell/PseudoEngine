//Load System Implementation File
//Created by Duncan Campbell

#include "LoadSystem.h"

#include <iostream>

#include "SFML/Graphics.hpp"

using namespace std;

LocationComponent* LoadSystem::loadLocationComponent(YAML::Node node) {
	int id;
	float x, y, angle;
	
	id = node["id"].as<int>();
	x = node["x"].as<float>();
	y = node["y"].as<float>();
	angle = node["angle"].as<float>();
	
	return new LocationComponent(id, x, y, x);
}

TextureComponent* LoadSystem::loadTextureComponent(YAML::Node node) {
	int id;
	
	int sheet, textureX, textureY;
	
	id = node["id"].as<int>();
	sheet = node["sheet"].as<int>();
	textureX = node["textureX"].as<int>();
	textureY = node["textureY"].as<int>();
	
	return new TextureComponent(id, sheet, textureX, textureY);
}


LocationSystem* LoadSystem::loadLocationSystem(YAML::Node node) {
	LocationSystem* sys = new LocationSystem();
	
	for(auto comp : node) {
		sys->addComponent(loadLocationComponent(comp)->getId(), loadLocationComponent(comp));
	}
	
	return sys;
}

TextureSystem* LoadSystem::loadTextureSystem(YAML::Node node) {
	TextureSystem* sys = new TextureSystem();
	
	for(auto comp : node) {
		sys->addComponent(loadTextureComponent(comp)->getId(), loadTextureComponent(comp));
	}
	
	return sys;
}



World* LoadSystem::loadWorld(YAML::Node node) {
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
			world->addSystem(systemName, loadLocationSystem(YAML::LoadFile(sys["components"].as<std::string>())));
		}
		
		//Works magic to load the texture system
		if(systemName == "Texture System") {
			world->addSystem(systemName, loadTextureSystem(YAML::LoadFile(sys["components"].as<std::string>())));
		}
	}
	
	//Add the managers to the world
	for(auto man : node["managers"]) {
		std::string managerName = man["name"].as<std::string>();
		
		if(managerName == "Texture Manager") {
			world->setTextureManager(loadTextureManager(YAML::LoadFile(man["assets"].as<std::string>())));
		}
	}
	
	return world;
}

Luna::TextureManager* LoadSystem::loadTextureManager(YAML::Node node) {
	//Create a texture manager
	Luna::TextureManager* manager = new Luna::TextureManager();
	
	for(auto texture : node) {
		std::string filename = texture["filename"].as<std::string>();
		int sheet = texture["sheet"].as<int>();
		sf::Texture image;
		image.loadFromFile(filename);
		
		manager->addSheet(image);
	}
	
	return manager;
}

