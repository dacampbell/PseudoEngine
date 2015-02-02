//Component Header File
//Created by Duncan Campbell

#ifndef COMPONENT_H
#define COMPONENT_H

#include "yaml-cpp/yaml.h"

class Component
{
	public:
		Component();
		~Component();
		
		virtual void save(YAML::Node file) = 0;
		virtual void load(YAML::Node file) = 0;
		
	private:
	
};

#endif