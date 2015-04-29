//Player System implementation file
//Created by Duncan Campbell

#include "PlayerSystem.h"

#include "Engine.h"
#include "World.h"
#include "InputManager.h"
#include "LocationComponent.h"


void PlayerSystem::initSystem() {

}

void PlayerSystem::updateSystem() {
  for(auto item : *(this->getComponents())) {
    PlayerComponent* player = (PlayerComponent*)item.second;
    LocationComponent* loc = (LocationComponent*)Engine::world->getSystem("Location System")->getComponent(player->getId());

    int x = loc->getX();
    int y = loc->getY();

    switch(Engine::world->getInputManager()->getKeyPressed()) {
      case UP_ARROW   : y -= 3;
                        break;
      case DOWN_ARROW : y += 3;
                        break;
      case RIGHT_ARROW: x += 3;
                        break;
      case LEFT_ARROW : x -= 3;
                        break;
    }

    loc->setX(x);
    loc->setY(y);

    Engine::camera->setX(x - Engine::camera->getWidth() / 2);
	  Engine::camera->setY(y - Engine::camera->getHeight() / 2);
  }
}
