//Engine Implementation File
//Created by Duncan Campbell

#include "Engine.h"

World* Engine::world = NULL;
Camera* Engine::camera = NULL;

void Engine::init() {
	Engine::world->initWorld();
}

void Engine::run() {
	while(1) {
		Engine::world->updateWorld();
	}
}