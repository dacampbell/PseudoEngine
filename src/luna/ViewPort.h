//View Port Header File
//Created by Duncan Campbell

#ifndef VIEWPORT_H
#define VIEWPORT_H

#include "SDL2/SDL.h"

#include "TileSheet.h"
#include "SpriteSheet.h"

namespace Luna {

	class ViewPort {
		public:
			ViewPort(int width, int height);
			~ViewPort();
			
			void drawTile(TileSheet* tileSheet, int tileNum);
			void drawSprite(SpriteSheet* spriteSheet, int spriteNum);
			
		private:
			int width;
			int height;
			
			SDL_Window* window;
			SDL_Surface* screenSurface;
			SDL_Surface* screenBuffer;
	};
}

#endif