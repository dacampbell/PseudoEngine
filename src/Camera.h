//Camera Header File
//Created by Duncan Campbell

#ifndef CAMERA_H
#define CAMERA_H

#include "World.h"

class Camera {
	public:
		Camera(int x, int y, int width, int height);
		~Camera();

		int getX();
		int getY();
		int getWidth();
		int getHeight();

		void setX(int x);
		void setY(int y);
		void setWidth(int width);
		void setHeight(int height);

	private:

		int x;
		int y;
		int width;
		int height;
};

#endif
