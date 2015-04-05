//View Port Header File
//Created by Duncan Campbell

#ifndef VIEWPORT_H
#define VIEWPORT_H

#include "SFML/Window.hpp"

namespace Luna {

	class ViewPort {
		public:
			ViewPort(int width, int height);
			~ViewPort();
			
			void drawTexture(int sheet, int texture);
			
		private:
			int width;
			int height;
			
			sf::Window* window;
	};
}

#endif