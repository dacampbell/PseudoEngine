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
		int getOffsetX();
		int getOffsetY();
		
		void setSheet(int sheet);
		void setTexture(int texture);
		void setWidth(int width);
		void setHeight(int height);
		void setOffsetX(int offsetX);
		void setOffsetY(int offsetY);
		
	private:
		int sheet;
		int texture;
		int width;
		int height;
		int offsetX;
		int offsetY;
};

#endif