//Player component header file
//Created by Duncan Campbell

#ifndef PLAYER_COMPONENT_H
#define PLAYER_COMPONENT_H

#include "Component.h"

class PlayerComponent : public Component {
  public:
    PlayerComponent(int id) : Component(id) {}
    ~PlayerComponent();
    
  private:
};

#endif
