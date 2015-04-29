//Animation Component Header File
//Created by Duncan Campbell

#include <vector>
#include <map>

#include "Component.h"

#ifndef ANIMATION_COMPONENT_H
#define ANIMATION_COMPONENT_H

struct Frame {
  int sheet;
  int textureY;
  int textureX;
  int frameDuration;
};

class AnimationComponent : public Component {
  public:
    AnimationComponent(int id, int startFrame, std::vector<Frame> frames) : Component(id), currFrame(startFrame), elapsedFrames(0), frames(frames) {}
    ~AnimationComponent() {}

    std::vector<Frame> getFrames();
    void setFrames(std::vector<Frame> animations);

    int getCurrentFrame();
    void setCurrentFrame(int currFrame);

    int getCurrentAnimation();
    void setCurrentAnimation(int currAnimation);

    int getElapsedFrames();
    void setElapsedFrames(int elapsedFrames);

  private:
    int currFrame;
    int elapsedFrames;
    std::vector<Frame> frames;
};

#endif
