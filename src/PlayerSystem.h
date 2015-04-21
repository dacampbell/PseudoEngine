//Player System header file
//Created by Duncan Campbell

#ifndef PLAYER_SYSTEM_H
#define PLAYER_SYSTEM_H

#include "System.h"
#include "luna/InputManager.h"
#include "PlayerComponent.h"

class PlayerSystem : public System {
  public:
    PlayerSystem() {}
    ~PlayerSystem() {}

    virtual void initSystem();
    virtual void updateSystem();
  private:
};

#endif
