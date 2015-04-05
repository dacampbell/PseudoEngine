//Texture Manager Header File
//Created by Duncan Campbell

#include <vector>

#include "SFML/Graphics.hpp"

namespace Luna {
	
	class TextureManager {
		public:
			TextureManager();
			~TextureManager();
			
			sf::Sprite* getTexture(int sheet, int texture);
			
		private:
			std::vector<sf::Texture*> sheets;
	};
}