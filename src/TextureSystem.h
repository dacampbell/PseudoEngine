//Texture System Header File
//Created by Duncan Campbell

#ifndef TEXTURE_SYSTEM_H
#define TEXTURE_SYSTEM_H

#include <vector>

#include "System.h"
#include "TextureManager.h"
#include "ViewPort.h"


class TextureSystem : public System {
	public:
		TextureSystem() { }
		~TextureSystem() { }

		virtual void initSystem();

		virtual void updateSystem();

	private:
		ViewPort* viewport;
};

#endif
