//Engine Header File
//Created by Duncan Campbell

#ifndef ENGINE_H
#define ENGINE_H

#include "World.h"
#include "Camera.h"
#include "Viewport.h"

class Engine {
	public:
		static Camera* camera;
		static
		static World* world;

		static void init();
		static void run();
};

#endif
