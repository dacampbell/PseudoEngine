//View Port Implementation File
//Created by Duncan Campbell

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

#include "ViewPort.h"
#include "TextureManager.h"

ViewPort::ViewPort(int width, int height, TextureManager* textureManager) {
	//Set the viewport width and height internally
	this->width = width;
	this->height = height;

	//Initialize the base SFML Window
	window = new sf::RenderWindow(sf::VideoMode(width, height), "PsuedoEngine");

	window->setFramerateLimit(60);
	
	//Assign the texture maanager
	this->textureManager = textureManager;
}

ViewPort::~ViewPort() {
	//Destroy the window
	delete window;
}

void ViewPort::drawTexture(int x, int y, int sheet, int textureX, int textureY) {
	sf::Sprite sprite = textureManager->getTexture(sheet, textureX, textureY);
	sprite.move(sf::Vector2f(x, y));
	window->draw(sprite);
}

void ViewPort::display() {
	this->window->display();
}

void ViewPort::clear() {
	this->window->clear();
}

TextureManager*  ViewPort::getTextureManager() {
	return this->textureManager;
}

void ViewPort::setTextureManager(TextureManager* textureManager) {
	delete this->textureManager;
	this->textureManager = textureManager;
}
