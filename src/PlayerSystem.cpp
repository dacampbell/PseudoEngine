//Player System implementation file
//Created by Duncan Campbell

#include "PlayerSystem.h"

#include "Engine.h"
#include "luna/InputManager.h"


void PlayerSystem::initSystem() {

}

void PlayerSystem::updateSystem() {
  for(auto item : *(this->getComponents())) {
    PlayerComponent* player = (PlayerComponent*)item.second;

    int cameraX = Engine::camera->getX();
    int cameraY = Engine::camera->getY();

    switch(Engine::world->getInputManager()->getKeyPressed()) {
      case Luna::UP_ARROW   : cameraY += 1;
                                  break;
      case Luna::DOWN_ARROW : cameraY -= 1;
                                  break;
      case Luna::RIGHT_ARROW: cameraX -= 1;
                                  break;
      case Luna::LEFT_ARROW : cameraX += 1;
                                  break;
    }

    Engine::camera->setX(cameraX);
	 Engine::camera->setY(cameraY);
  }
}
