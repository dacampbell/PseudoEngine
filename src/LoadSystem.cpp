//Load System Implementation File
//Created by Duncan Campbell

#include "LoadSystem.h"

#include <iostream>

#include "SFML/Graphics.hpp"

using namespace std;

LocationComponent* LoadSystem::loadLocationComponent(YAML::Node node) {
	int id;
	float x, y, angle;
	int layer;

	id = node["id"].as<int>();
	x = node["x"].as<float>();
	y = node["y"].as<float>();
	angle = node["angle"].as<float>();
	layer = node["layer"].as<int>();

	return new LocationComponent(id, x, y, angle, layer);
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

PlayerComponent* LoadSystem::loadPlayerComponent(YAML::Node node) {
	int id;

	id = node["id"].as<int>();

	return new PlayerComponent(id);
}

AnimationComponent* LoadSystem::loadAnimationComponent(YAML::Node node) {
	int id;
	int startFrame;

	id = node["id"].as<int>();
	startFrame = node["startFrame"].as<int>();

	vector<Frame> animations;

	for(auto frame : node["frames"]) {
		Frame animation;

		animation.sheet = frame["sheet"].as<int>();
		animation.textureX = frame["textureX"].as<int>();
		animation.textureY = frame["textureY"].as<int>();
		animation.frameDuration = frame["frameDuration"].as<int>();

		animations.push_back(animation);
	}

	//cout << animations.size() << endl;

	return new AnimationComponent(id, startFrame, animations);
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

PlayerSystem* LoadSystem::loadPlayerSystem(YAML::Node node) {
	PlayerSystem* sys = new PlayerSystem();

	for(auto comp : node) {
		sys->addComponent(loadPlayerComponent(comp)->getId(), loadPlayerComponent(comp));
	}

	return sys;
}

AnimationSystem* LoadSystem::loadAnimationSystem(YAML::Node node) {
	AnimationSystem* sys = new AnimationSystem();

	for(auto comp : node) {
		sys->addComponent(loadAnimationComponent(comp)->getId(), loadAnimationComponent(comp));
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

		//Works magic to load the systes
		if(systemName == "Location System") {
			world->addSystem(systemName, loadLocationSystem(YAML::LoadFile(sys["components"].as<std::string>())));
		}
		else if(systemName == "Texture System") {
			world->addSystem(systemName, loadTextureSystem(YAML::LoadFile(sys["components"].as<std::string>())));
		}
		else if(systemName == "Player System") {
			world->addSystem(systemName, loadPlayerSystem(YAML::LoadFile(sys["components"].as<std::string>())));
		}
		else if(systemName == "Animation System") {
			world->addSystem(systemName, loadAnimationSystem(YAML::LoadFile(sys["components"].as<std::string>())));
		}
	}

	//Add the managers to the world
	for(auto man : node["managers"]) {
		std::string managerName = man["name"].as<std::string>();

		if(managerName == "Texture Manager") {
			world->setTextureManager(loadTextureManager(YAML::LoadFile(man["assets"].as<std::string>())));
		}
		else if(managerName == "Texture Manager") {
			world->setInputManager(loadInputManager());
		}
	}

	return world;
}

TextureManager* LoadSystem::loadTextureManager(YAML::Node node) {
	//Create a texture manager
	TextureManager* manager = new TextureManager();

	for(auto texture : node) {
		std::string filename = texture["filename"].as<std::string>();
		int sheet = texture["sheet"].as<int>();
		sf::Texture image;
		image.loadFromFile(filename);

		manager->addSheet(image);
	}

	return manager;
}

InputManager* LoadSystem::loadInputManager() {
	InputManager* inputManager = new InputManager();

	return inputManager;
}
