//Load System Implementation File
//Created by Duncan Campbell

#include "LoadSystem.h"

LocationComponent* LoadSystem::loadLocationComponent(YAML::Node node)
{
	int id;
	float x, y, angle;
	
	id = node["id"].as<int>();
	x = node["x"].as<float>();
	y = node["y"].as<float>();
	angle = node["angle"].as<float>();
	
	return new LocationComponent(id, x, y, x);
}
