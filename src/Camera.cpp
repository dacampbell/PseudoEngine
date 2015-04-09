//Camera Implementation File
//Created by Duncan Campbell

#include "Camera.h"
#include "TextureComponent.h"
#include "LocationComponent.h"

#include "luna/ViewPort.h"

Camera::Camera(World* world, int x, int y, int width, int height) {
	this->world = world;
	this->x = x;
	this->y = y;
	this->viewport = new Luna::ViewPort(width, height);
	this->viewport->setTextureManager(world->getTextureManager());
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

void Camera::setWorld(World* world) {
	this->world = world;
}


void Camera::updateCamera() {
	this->viewport->clear();
	
	for(auto item : *this->world->getSystem("Texture System")->getComponents()) {
		TextureComponent* comp = (TextureComponent*)item.second;
		LocationComponent* loc = (LocationComponent*)this->world->getSystem("Location System")->getComponent(comp->getId());
		this->viewport->drawTexture(loc->getX(), loc->getY(), comp->getSheet(), comp->getTextureX(), comp->getTextureY());
	}
	
	this->viewport->display();
}




