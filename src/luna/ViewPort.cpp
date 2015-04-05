//View Port Implementation File
//Created by Duncan Campbell

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

#include "ViewPort.h"

namespace Luna {
	ViewPort::ViewPort(int width, int height) {
		//Set the viewport width and height internally
		this->width = width;
		this->height = height;
		
		//Initialize the base SFML Window
		window = new sf::Window(sf::VideoMode(width, height), "PsuedoEngine");
	}
	
	ViewPort::~ViewPort() {
		//Destroy the window
		delete window;
	}
	
	void ViewPort::ViewPort::drawTexture(int sheet, int texture) {
	
	}
}