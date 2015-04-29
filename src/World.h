//World Header File
//Created by Duncan Campbell

#ifndef WORLD_H
#define WORLD_H

#include <map>
#include <string>

#include "System.h"
#include "TextureManager.h"
#include "InputManager.h"

class World {
	public:
		World() {};
		~World() {};

		void addSystem(std::string name, System* system);

		System* getSystem(std::string systemName);

		TextureManager* getTextureManager();
		void setTextureManager(TextureManager* textureManager);

		InputManager* getInputManager();
		void setInputManager(InputManager* inputManager);

		void initWorld();
		void updateWorld();

	private:
		std::map<std::string, System*> systems;
		TextureManager* textureManager;
		InputManager* inputManager;
};

#endif
