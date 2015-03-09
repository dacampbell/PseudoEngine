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

