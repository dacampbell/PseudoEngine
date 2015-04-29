//Animation System Header File
//Created by Duncan Campbell

#ifndef ANIMATION_SYSTEM_H
#define ANIMATION_SYSTEM_H

#include "System.h"

class AnimationSystem : public System {
  public:
    virtual void initSystem();
    virtual void updateSystem();
    
};

#endif
