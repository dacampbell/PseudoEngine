//Render Component Implementation File
//Created by Duncan Campbell

#include "TextureComponent.h"

int TextureComponent::getSheet() {
	return this->sheet;
}

int TextureComponent::getTexture() {
	return this->texture;
}

int TextureComponent::getWidth() {
	return this->width;
}

int TextureComponent::getHeight() {
	return this->height;
}

void TextureComponent::setSheet(int sheet) {
	this->sheet = sheet;
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
