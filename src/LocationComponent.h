//Location Component Header File
//Created by Duncan Campbell

#ifndef LOCATION_COMPONENT_H
#define LOCATION_COMPONENT_H

#include "Component.h"

class LocationComponent : public Component
{
	public:
		LocationComponent(int id) : Component(id), x(0), y(0), angle(0) {}
		LocationComponent(int id, float x, float y, float angle) : Component(id), x(x), y(y), angle(angle) {}
		~LocationComponent() {}
		
		float getX();
		float getY();
		float getAngle();
		
		void setX(float x);
		void setY(float y);
		void setAngle(float angle);
		
	private:
		float x;
		float y;
		float angle;
};

#endif