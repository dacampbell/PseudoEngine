//Component System Header File
//Create by Duncan Campbell

#ifndef COMPONENT_SYSTEM_H
#define COMPONENT_SYSTEM_H

#include <unordered_map>
#include <algorithm>

#include "Component.h"

class ComponentSystem 
{
	public:
		ComponentSystem();
		~ComponentSystem();
		
		Component* getComponent(int id);
		void addComponent(int id, Component* component);
		
		virtual void updateComponents() = 0;
		
	protected:
		std::unordered_map<int, Component*> components;
};

#endif