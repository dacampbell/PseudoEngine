//Animation System Implementation File
//Created by Duncan Campbell

#include "AnimationSystem.h"
#include "AnimationComponent.h"
#include "TextureComponent.h"
#include "Engine.h"
#include "World.h"

#include <iostream>

using namespace std;

void AnimationSystem::initSystem() {

}

void AnimationSystem::updateSystem() {

  for(auto item : *(this->getComponents())) {
    AnimationComponent* comp = (AnimationComponent*)item.second;
    TextureComponent* tex = (TextureComponent*)Engine::world->getSystem("Texture System")->getComponent(comp->getId());

    int currFrame = comp->getCurrentFrame();

    int numberFrames = comp->getFrames().size();
    int frameDuration = comp->getFrames().at(currFrame).frameDuration;
    int elapsedFrames = comp->getElapsedFrames();
    Frame frame = comp->getFrames().at(currFrame);

    if(elapsedFrames > frameDuration) {
      elapsedFrames = 0;

      currFrame++;

      if(currFrame >= numberFrames) {
        currFrame = 0;
      }
    }
    else {
      elapsedFrames++;
    }

    comp->setElapsedFrames(elapsedFrames);
    comp->setCurrentFrame(currFrame);

    tex->setSheet(frame.sheet);
    tex->setTextureX(frame.textureX);
    tex->setTextureY(frame.textureY);
  }
}
