//Location Component Implementation File
//Created by Duncan Campbell

#include "LocationComponent.h"

float LocationComponent::getAngle()
{
	return this->angle;
}

float LocationComponent::getX()
{
	return this->x;
}

float LocationComponent::getY()
{
	return this->y;
}

int LocationComponent::getLayer() {
	return this->layer;
}

void LocationComponent::setAngle(float angle)
{
	this->angle = angle;
}

void LocationComponent::setX(float x)
{
	this->x = x;
}

void LocationComponent::setY(float y)
{
	this->y = y;
}

void LocationComponent::setLayer(int layer) {
	this->layer = layer;
}
