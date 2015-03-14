#include <iostream>

#include "LocationSystem.h"
#include "LoadSystem.h"

#include "yaml-cpp/yaml.h"

int main(int argc, char **argv) {
	
	LocationSystem sys;
	
	YAML::Node node1 = YAML::Load("{id: 1, x: 10.0, y: 10.0, angle: 0.0}");
	YAML::Node node2 = YAML::Load("{id: 2, x: 10.0, y: 10.0, angle: 0.0}");
	YAML::Node node3 = YAML::Load("{id: 3, x: 20.0, y: 10.0, angle: 0.0}");
	YAML::Node node4 = YAML::Load("{id: 4, x: 10.0, y: 10.0, angle: 0.0}");
	YAML::Node node5 = YAML::Load("{id: 5, x: 10.0, y: 10.0, angle: 0.0}");
	
	sys.addComponent(1, LoadSystem::loadLocationComponent(node1));
	sys.addComponent(2, LoadSystem::loadLocationComponent(node2));
	sys.addComponent(3, LoadSystem::loadLocationComponent(node3));
	sys.addComponent(4, LoadSystem::loadLocationComponent(node4));
	sys.addComponent(5, LoadSystem::loadLocationComponent(node5));
	
	
	sys.updateComponents();
	
    return 0;
}
