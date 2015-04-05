//Render Component Header File
//Created by Duncan Campbell

#ifndef TEXTURE_COMPONENT_H
#define TEXTURE_COMPONENT_H

#include "Component.h"

class TextureComponent {
	public:
		int getSheet();
		int getTexture();
		int getWidth();
		int getHeight();
		
		void setSheet(int sheet);
		void setTexture(int texture);
		void setWidth(int width);
		void setHeight(int height);
		
	private:
		int sheet;
		int texture;
		int width;
		int height;
};

#endif