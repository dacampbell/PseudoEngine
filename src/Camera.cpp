//Camera Implementation File
//Created by Duncan Campbell

#include "Camera.h"

#include "luna/ViewPort.h"

Camera::Camera(int x, int y, int width, int height) {
	this->x = x;
	this->y = y;
	this->viewport = new Luna::ViewPort(width, height);
}

Camera::~Camera() {
	delete this->viewport;
}

int Camera::getX() {
	return this->x;
}

int Camera::getY() {
	return this->y;
}

Luna::ViewPort* Camera::getViewPort() {
	return this->viewport;
}

void Camera::setX(int x) {
	this->x = x;
}

void Camera::setY(int y) {
	this->y = y;
}



