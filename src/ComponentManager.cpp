//Comonent Manager Implementation File
//Created by Duncan Campbell

#include "ComponentManager.h"

ComponentManager::ComponentManager()
{

}

ComponentManager::~ComponentManager()
{

}

Component* ComponentManager::getComponent(int id)
{
	return components.at(id);
}

void ComponentManager::addComponent(int id, Component* component)
{
	components.insert({id, component});
}

