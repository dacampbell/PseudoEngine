//Comonent Manager Implementation File
//Created by Duncan Campbell

#include "System.h"

System::System()
{

}

System::~System()
{

}

Component* System::getComponent(int id)
{
	return components.at(id);
}

std::unordered_map<int, Component*>* System::getComponents() {
	return &(this->components);
}

void System::addComponent(int id, Component* component)
{
	components.insert({id, component});
}

