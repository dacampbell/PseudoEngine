//Camera Implementation File
//Created by Duncan Campbell

#include "Camera.h"

Camera::Camera(int x, int y, int width, int height) {
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

Camera::~Camera() {
	
}

int Camera::getX() {
	return this->x;
}

int Camera::getY() {
	return this->y;
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

void Camera::setWidth(int width) {
	this->width = width;
}

void Camera::setHeight(int height) {
	this->height = height;
}


