//Texture Manager Header File
//Created by Duncan Campbell

#include <vector>
#include <deque>

#include "SFML/Graphics.hpp"

#ifndef LUNA_TEXTURE_MANAGER
#define LUNA_TEXTURE_MANAGER

namespace Luna {

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

}

#endif
