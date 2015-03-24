//Camera Header File
//Created by Duncan Campbell

#ifndef CAMERA_H
#define CAMERA_H

#include "luna/ViewPort.h"

class Camera {
	public:
		Camera(int x, int y, int width, int height);
		~Camera();
		
		int getX();
		int getY();
		Luna::ViewPort* getViewPort();
		
		void setX(int x);
		void setY(int y);
		
	private:
		Luna::ViewPort* viewport;
		int x; 
		int y;
		
};

#endif