//Component Manager Header File
//Create by Duncan Campbell

#ifndef COMPONENTMANAGER_H
#define COMPONENTMANAGER_H

#include <map>
#include <algorithm>

#include "yaml-cpp/yaml.h"

#include "Component.h"

class ComponentManager 
{
	public:
		ComponentManager();
		~ComponentManager();
		
		Component* getComponent(int id);
		void addComponent(int id, Component* component);
		
		virtual void save(YAML::Node file) = 0;
		virtual void load(YAML::Node file) = 0;
		
		virtual void updateComponents() = 0;
		
	protected:
		std::map<int, Component*> components;
};

#endif