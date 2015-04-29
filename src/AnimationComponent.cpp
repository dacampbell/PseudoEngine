//Animation File Implementation File
//Created by Duncan Campbell

#include "AnimationComponent.h"

std::vector<Frame> AnimationComponent::getFrames() {
  return this->frames;
}

void AnimationComponent::setFrames(std::vector<Frame> frames) {
  this->frames = frames;
}

int AnimationComponent::getCurrentFrame() {
  return this->currFrame;
}

void AnimationComponent::setCurrentFrame(int currFrame) {
  this->currFrame = currFrame;
}

int AnimationComponent::getElapsedFrames() {
  return this->elapsedFrames;
}

void AnimationComponent::setElapsedFrames(int elapsedFrames) {
  this->elapsedFrames = elapsedFrames;
}
