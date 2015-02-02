//Component Header File
//Created by Duncan Campbell

#ifndef COMPONENT_H
#define COMPONENT_H

class Component
{
	public:
		Component(int id) : id(id) {}
		~Component() {}
		
		int getId();
		
		void setId(int id);
		
	private:
		int id;
};

#endif