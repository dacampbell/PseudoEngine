//Render Component Implementation File
//Created by Duncan Campbell

#include "RenderComponent.h"

int RenderComponent::getTexture()
{
	return this->texture;
}

void RenderComponent::setTexture(int texture)
{
	this->texture = texture;
}
