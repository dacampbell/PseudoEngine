//Render Component Header File
//Created by Duncan Campbell

#ifndef RENDER_COMPONENT_H
#define RENDER_COMPONENT_H

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