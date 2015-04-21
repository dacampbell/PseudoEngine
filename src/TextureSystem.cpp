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
		this->viewport->drawTexture(loc->getX() + Engine::camera->getX(), loc->getY() + Engine::camera->getY(), comp->getSheet(), comp->getTextureX(), comp->getTextureY());
	}

	this->viewport->display();
}
