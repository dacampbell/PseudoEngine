//Render Component Header File
//Created by Duncan Campbell

#ifndef TEXTURE_COMPONENT_H
#define TEXTURE_COMPONENT_H

#include "Component.h"

class TextureComponent : public Component {
	public:
		TextureComponent(int id, int sheet, int textureX, int textureY) : Component(id), sheet(sheet), textureX(textureX), textureY(textureY) {}
		~TextureComponent() {}
		
		int getSheet();
		int getTextureX();
		int getTextureY();
		
		void setSheet(int sheet);
		void setTextureX(int textureX);
		void setTextureY(int textureY);
		
	private:
		int sheet;
		int textureX;
		int textureY;
};

#endif