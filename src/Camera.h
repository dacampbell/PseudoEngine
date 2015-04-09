//Camera Header File
//Created by Duncan Campbell

#ifndef CAMERA_H
#define CAMERA_H

#include "luna/ViewPort.h"
#include "World.h"

class Camera {
	public:
		Camera(World* world, int x, int y, int width, int height);
		~Camera();
		
		int getX();
		int getY();
		Luna::ViewPort* getViewPort();
		
		void setX(int x);
		void setY(int y);
		void setWorld(World* world);
		
		void updateCamera();
		
	private:
		Luna::ViewPort* viewport;
		World* world;
		
		int x; 
		int y;
		
};

#endif