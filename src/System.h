//Component System Header File
//Create by Duncan Campbell

#ifndef SYSTEM_H
#define SYSTEM_H

#include <unordered_map>
#include <algorithm>

#include "Component.h"

class System 
{
	public:
		System();
		~System();
		
		Component* getComponent(int id);
		void addComponent(int id, Component* component);
		
		std::unordered_map<int, Component*>* getComponents();
		
		virtual void initSystem() = 0;
		virtual void updateSystem() = 0;
		
	protected:
		std::unordered_map<int, Component*> components;
};

#endif