//Player System implementation file
//Created by Duncan Campbell

#include "PlayerSystem.h"

#include "Engine.h"
#include "InputManager.h"


void PlayerSystem::initSystem() {

}

void PlayerSystem::updateSystem() {
  for(auto item : *(this->getComponents())) {
    PlayerComponent* player = (PlayerComponent*)item.second;

    int cameraX = Engine::camera->getX();
    int cameraY = Engine::camera->getY();

    switch(Engine::world->getInputManager()->getKeyPressed()) {
      case UP_ARROW   : cameraY -= 1;
                        break;
      case DOWN_ARROW : cameraY += 1;
                        break;
      case RIGHT_ARROW: cameraX += 1;
                        break;
      case LEFT_ARROW : cameraX -= 1;
                        break;
    }

    Engine::camera->setX(cameraX);
	  Engine::camera->setY(cameraY);
  }
}
