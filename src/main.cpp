#include <iostream>

#include "LocationManager.h"


int main(int argc, char **argv) {
	LocationManager man;
	
	man.addComponent(1, new LocationComponent(1, 10, 10, 0));
	man.addComponent(2, new LocationComponent(2, 20, 20, 0));
	man.addComponent(3, new LocationComponent(3, 30, 30, 0));
	man.addComponent(4, new LocationComponent(4, 40, 40, 0));
	man.addComponent(5, new LocationComponent(5, 50, 50, 0));
	
	man.updateComponents();
	
    return 0;
}
