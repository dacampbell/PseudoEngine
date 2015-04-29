//Input Manager header file
//Created by Duncan Campbell

#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

enum Event {NONE, UP_ARROW, DOWN_ARROW, RIGHT_ARROW, LEFT_ARROW};

class InputManager {
  public:
    InputManager() {}
    ~InputManager() {}

    Event getKeyPressed();

  private:
};

#endif
