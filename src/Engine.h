//Engine Header File
//Created by Duncan Campbell

#ifndef ENGINE_H
#define ENGINE_H

#include "World.h"
#include "Camera.h"

class Engine {
	public:
		static Camera* camera;
		static World* world;

		static void init();
		static void run();
};

#endif