#include <iostream>

#include "LoadSystem.h"
#include "World.h"

#include "yaml-cpp/yaml.h"

int main(int argc, char **argv) {
	
	World* world = LoadSystem::loadWorld(YAML::LoadFile("assets/Demo Level.yaml"));
	
	world->updateSystems();
	
   return 0;
}
