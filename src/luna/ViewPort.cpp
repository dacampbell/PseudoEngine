//View Port Implementation File
//Created by Duncan Campbell

#include "SDL2/SDL.h"

#include "ViewPort.h"
#include "TileSheet.h"
#include "SpriteSheet.h"

namespace Luna {
	ViewPort::ViewPort(int width, int height) {
		//Set the viewport width and height internally
		this->width = width;
		this->height = height;
		
		//Initialize the base SDL window and initialize SDL
		SDL_Init(SDL_INIT_VIDEO);
		this->window = SDL_CreateWindow("PseudoEngine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, height, width, SDL_WINDOW_OPENGL);
		this->screenSurface = SDL_GetWindowSurface(this->window);
	}
	
	ViewPort::~ViewPort() {
		//Destroy the window
		SDL_DestroyWindow(this->window);
	}
}