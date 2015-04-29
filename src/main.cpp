#include <iostream>

#include "LoadSystem.h"
#include "World.h"
#include "Camera.h"
#include "Engine.h"

#include "yaml-cpp/yaml.h"

int main(int argc, char **argv) {

	Engine::world = LoadSystem::loadWorld(YAML::LoadFile("assets/Demo Level.yaml"));
	Engine::camera = new Camera( -100, -100, 800, 600);

	Engine::init();
	while(1) {
		Engine::run();
	}

	return 0;
}
