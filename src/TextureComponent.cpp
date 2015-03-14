//Render Component Implementation File
//Created by Duncan Campbell

#include "TextureComponent.h"

int TextureComponent::getTexture() {
	return this->texture;
}

int TextureComponent::getWidth() {
	return this->width;
}

int TextureComponent::getHeight() {
	return this->height;
}

int TextureComponent::getOffsetX() {
	return this->offsetX;
}

int TextureComponent::getOffsetY() {
	return this->offsetY;
}

void TextureComponent::setTexture(int texture) {
	this->texture = texture;
}

void TextureComponent::setWidth(int width) {
	this->width = width;
}

void TextureComponent::setHeight(int height) {
	this->height = height;
}

void TextureComponent::setOffsetX(int offsetX) {
	this->offsetX = offsetX;
}

void TextureComponent::setOffsetY(int offsetY) {
	this->offsetY = offsetY;
}
