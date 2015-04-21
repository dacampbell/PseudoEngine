//Load System Header File
//Created by Duncan Campbell

#ifndef LOAD_SYSTEM_H
#define LOAD_SYSTEM_H

#include "yaml-cpp/yaml.h"

#include "World.h"

#include "LocationSystem.h"
#include "TextureSystem.h"
#include "PlayerSystem.h"

#include "LocationComponent.h"
#include "TextureComponent.h"
#include "PlayerComponent.h"

#include "luna/TextureManager.h"
#include "luna/InputManager.h"

class LoadSystem {
	public:
		static LocationComponent* loadLocationComponent(YAML::Node node);
		static TextureComponent* loadTextureComponent(YAML::Node node);
		static PlayerComponent* loadPlayerComponent(YAML::Node node);

		static LocationSystem* loadLocationSystem(YAML::Node node);
		static TextureSystem* loadTextureSystem(YAML::Node node);
		static PlayerSystem* loadPlayerSystem(YAML::Node node);

		static World* loadWorld(YAML::Node node);

		static Luna::TextureManager* loadTextureManager(YAML::Node node);
		static Luna::InputManager* loadInputManager();

	private:

};

#endif
