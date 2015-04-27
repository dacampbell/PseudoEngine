//Texture Manager Implementation
//Created by Duncan Campbell

#include <vector>

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"

#include "TextureManager.h"

TextureManager::TextureManager() {

}

TextureManager::~TextureManager() {

}

void TextureManager::addSheet(sf::Texture texture) {
	this->sheets.push_back(texture);
	this->sheetSprites.push_back(sf::Sprite(this->sheets.at(this->sheets.size()-1)));
}

sf::Sprite TextureManager::getTexture(int sheet, int textureX, int textureY) {
	this->sheetSprites.at(sheet).setTextureRect(sf::IntRect(textureX * 32, textureY * 32, 32, 32));

	return this->sheetSprites.at(sheet);
}
