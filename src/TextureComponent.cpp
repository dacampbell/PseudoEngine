//Render Component Implementation File
//Created by Duncan Campbell

#include "TextureComponent.h"

int TextureComponent::getSheet() {
	return this->sheet;
}

int TextureComponent::getTextureX() {
	return this->textureX;
}

int TextureComponent::getTextureY() {
	return this->textureY;
}

void TextureComponent::setSheet(int sheet) {
	this->sheet = sheet;
}

void TextureComponent::setTextureX(int textureX) {
	this->textureX = textureX;
}

void TextureComponent::setTextureY(int textureY) {
	this->textureY = textureY;
}
