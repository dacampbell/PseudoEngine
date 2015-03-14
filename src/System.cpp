//Comonent Manager Implementation File
//Created by Duncan Campbell

#include "ComponentSystem.h"

ComponentSystem::ComponentSystem()
{

}

ComponentSystem::~ComponentSystem()
{

}

Component* ComponentSystem::getComponent(int id)
{
	return components.at(id);
}

void ComponentSystem::addComponent(int id, Component* component)
{
	components.insert({id, component});
}

