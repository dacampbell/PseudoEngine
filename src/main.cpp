#include <iostream>

#include "LoadSystem.h"
#include "World.h"
#include "Camera.h"

#include "luna/ViewPort.h"

#include "yaml-cpp/yaml.h"

int main(int argc, char **argv) {
	
	World* world = LoadSystem::loadWorld(YAML::LoadFile("assets/Demo Level.yaml"));
	
	world->updateSystems();
	
	//Luna::ViewPort* view = new Luna::ViewPort(800, 600);
	Camera* camera = new Camera(world, 0, 0, 800, 600);
	
	while(1) {
		camera->updateCamera();
	}
		
	return 0;
}
