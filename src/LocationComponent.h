//Location Component Header File
//Created by Duncan Campbell

#ifndef LOCATION_COMPONENT_H
#define LOCATION_COMPONENT_H

#include "Component.h"

class LocationComponent : public Component
{
	public:
		LocationComponent(int id) : Component(id), x(0), y(0), angle(0), layer(0) {}
		LocationComponent(int id, float x, float y, float angle, int layer) : Component(id), x(x), y(y), angle(angle), layer(layer) {}
		~LocationComponent() {}

		float getX();
		float getY();
		float getAngle();
		int getLayer();

		void setX(float x);
		void setY(float y);
		void setAngle(float angle);
		void setLayer(int layer);

	private:
		float x;
		float y;
		float angle;
		int layer;
};

#endif
