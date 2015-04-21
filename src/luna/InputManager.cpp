//Input Manager implementation file
//Created by Duncan Campbell

#include "InputManager.h"

#include "SFML/System.hpp"
#include "SFML/Window.hpp"

namespace Luna {
  Key InputManager::getKeyPressed() {
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
      return UP_ARROW;
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
      return DOWN_ARROW;
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
      return RIGHT_ARROW;
    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
      return LEFT_ARROW;
    }
    else {
      return NONE;
    }
  }
}
