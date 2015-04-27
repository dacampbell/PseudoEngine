//Texture System Implementation File
//Created by Duncan Campbell

#include <unordered_map>

#include "Engine.h"
#include "TextureSystem.h"
#include "TextureComponent.h"
#include "LocationComponent.h"
#include "luna/ViewPort.h"

void TextureSystem::initSystem() {
	this->viewport = new Luna::ViewPort(Engine::camera->getWidth(), Engine::camera->getHeight(), Engine::world->getTextureManager());
}

void TextureSystem::updateSystem() {
	this->viewport->clear();

	for(auto item : *(this->getComponents())) {
		TextureComponent* comp = (TextureComponent*)item.second;
		LocationComponent* loc = (LocationComponent*)Engine::world->getSystem("Location System")->getComponent(comp->getId());

		int locX = loc->getX();
		int locY = loc->getY();
		int camX = Engine::camera->getX();
		int camY = Engine::camera->getY();
		int camW = Engine::camera->getWidth();
		int camH = Engine::camera->getHeight();

		if(locX > camX-32 && locX < camX + camW &&
			 locY > camY-32 && locY < camY + camH) {
				this->viewport->drawTexture(locX - camX, locY - camY, comp->getSheet(), comp->getTextureX(), comp->getTextureY());
		}

	}

	this->viewport->display();
}
