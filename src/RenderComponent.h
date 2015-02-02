//Render Component Header File
//Created by Duncan Campbell

#ifndef RENDERCOMPONENT_H
#define RENDERCOMPONENT_H

#include "yaml-cpp/yaml.h"

#include "Component.h"

class RenderComponent
{
	public:
		int getTexture();
		
		void setTexture(int texture);
		
	private:
		int texture;
};

#endif