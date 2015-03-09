//Load System Header File
//Created by Duncan Campbell

#ifndef LOAD_SYSTEM_H
#define LOAD_SYSTEM_H

#include "yaml-cpp/yaml.h"

#include "LocationComponent.h"

class LoadSystem {
	public:
		static LocationComponent* loadLocationComponent(YAML::Node node);
		
	private:
		
};

#endif