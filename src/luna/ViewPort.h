//View Port Header File
//Created by Duncan Campbell

#ifndef LUNA_VIEW_PORT_H
#define LUNA_VIEW_PORT_H

#include "SFML/Graphics.hpp"

#include "TextureManager.h"

namespace Luna {

	class ViewPort {
		public:
			ViewPort(int width, int height);
			~ViewPort();
			
			void drawTexture(int x, int y, int sheet, int textureX, int textureY);
			
			void display();
			void clear();
			
			TextureManager* getTextureManager();
			
			void setTextureManager(TextureManager* textureManager);
			
		private:
			int width;
			int height;
			
			sf::RenderWindow* window;
			
			TextureManager* textureManager;
	};
}

#endif