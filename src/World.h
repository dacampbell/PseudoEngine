//World Header File
//Created by Duncan Campbell

#ifndef WORLD_H
#define WORLD_H

#include <map>
#include <string>

#include "System.h"
#include "luna/TextureManager.h"

class World {
	public:
		World() {};
		~World() {};
		
		void addSystem(std::string name, System* system);
		
		System* getSystem(std::string systemName);
		
		Luna::TextureManager* getTextureManager();
		void setTextureManager(Luna::TextureManager* textureManager);
		
		void updateSystems();
		
	private:
		std::map<std::string, System*> systems;
		Luna::TextureManager* manager;
};

#endif