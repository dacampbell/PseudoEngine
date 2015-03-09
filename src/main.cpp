#include <iostream>

#include "LocationManager.h"
#include "LoadSystem.h"

#include "yaml-cpp/yaml.h"

int main(int argc, char **argv) {
	
	LocationManager man;
	
	YAML::Node node1 = YAML::Load("{id: 1, x: 10.0, y: 10.0, angle: 0.0}");
	YAML::Node node2 = YAML::Load("{id: 2, x: 10.0, y: 10.0, angle: 0.0}");
	YAML::Node node3 = YAML::Load("{id: 3, x: 10.0, y: 10.0, angle: 0.0}");
	YAML::Node node4 = YAML::Load("{id: 4, x: 10.0, y: 10.0, angle: 0.0}");
	YAML::Node node5 = YAML::Load("{id: 5, x: 10.0, y: 10.0, angle: 0.0}");
	
	man.addComponent(1, LoadSystem::loadLocationComponent(node1));
	man.addComponent(2, LoadSystem::loadLocationComponent(node2));
	man.addComponent(3, LoadSystem::loadLocationComponent(node3));
	man.addComponent(4, LoadSystem::loadLocationComponent(node4));
	man.addComponent(5, LoadSystem::loadLocationComponent(node5));
	
	
	man.updateComponents();
	
    return 0;
}
