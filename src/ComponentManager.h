//Component Manager Header File
//Create by Duncan Campbell

#ifndef COMPONENTMANAGER_H
#define COMPONENTMANAGER_H

#include <unordered_map>
#include <algorithm>

#include "Component.h"

class ComponentManager 
{
	public:
		ComponentManager();
		~ComponentManager();
		
		Component* getComponent(int id);
		void addComponent(int id, Component* component);
		
		virtual void updateComponents() = 0;
		
	protected:
		std::unordered_map<int, Component*> components;
};

#endif