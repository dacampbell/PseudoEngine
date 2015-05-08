//Camera Implementation File
//Created by Duncan Campbell

#include "Camera.h"

Camera::Camera(int x, int y, int width, int height) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
	this->targetX = x;
	this->targetY = y;
}

Camera::~Camera() {

}

int Camera::getX() {
	return this->x;
}

int Camera::getY() {
	return this->y;
}

int Camera::getTargetX() {
	return this->targetX;
}

int Camera::getTargetY() {
	return this->targetY;
}

int Camera::getWidth() {
	return this->width;
}

int Camera::getHeight() {
	return this->height;
}

void Camera::setX(int x) {
	this->x = x;
}

void Camera::setY(int y) {
	this->y = y;
}

void Camera::setTargetX(int targetX) {
	this->targetX = targetX;
}

void Camera::setTargetY(int targetY) {
	this->targetY = targetY;
}

void Camera::setWidth(int width) {
	this->width = width;
}

void Camera::setHeight(int height) {
	this->height = height;
}

void Camera::updateCamera() {
	const int interval = 3;

	if(x > targetX + interval) {
		x -= interval;
	}
	else if(x < targetX - interval) {
		x += interval;
	}

	if(y > targetY + interval) {
		y -= interval;
	}
	else if(y < targetY - interval) {
		y += interval;
	}
}
