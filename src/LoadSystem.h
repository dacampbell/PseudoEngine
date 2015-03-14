//Load System Header File
//Created by Duncan Campbell

#ifndef LOAD_SYSTEM_H
#define LOAD_SYSTEM_H

#include "yaml-cpp/yaml.h"

#include "Level.h"

#include "LocationComponent.h"

class LoadSystem {
	public:
		static LocationComponent* loadLocationComponent(YAML::Node node);
		
		static Level* loadLevel(YAML::Node node);
		
	private:
		
};

#endif