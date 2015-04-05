#include <iostream>

#include "LoadSystem.h"
#include "World.h"

#include "luna/ViewPort.h"

#include "yaml-cpp/yaml.h"

int main(int argc, char **argv) {
	
	World* world = LoadSystem::loadWorld(YAML::LoadFile("assets/Demo Level.yaml"));
	
	world->updateSystems();
	
	Luna::ViewPort* view = new Luna::ViewPort(800, 600);
	
	while(1);
		
	return 0;
}
