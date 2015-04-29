//Texture Manager Header File
//Created by Duncan Campbell

#include <vector>
#include <deque>

#include "SFML/Graphics.hpp"

#ifndef TEXTURE_MANAGER
#define TEXTURE_MANAGER

class TextureManager {
	public:
		TextureManager();
		~TextureManager();

		void addSheet(sf::Texture texture);

		sf::Sprite getTexture(int sheet, int textureX, int textureY);

	private:
		std::vector<sf::Sprite> sheetSprites;
		std::deque<sf::Texture> sheets;
};

#endif
