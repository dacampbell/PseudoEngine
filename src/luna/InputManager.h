//Input Manager header file
//Created by Duncan Campbell

#ifndef LUNA_INPUT_MANAGER_H
#define LUNA_INPUT_MANAGER_H

namespace Luna {
  enum Key {NONE, UP_ARROW, DOWN_ARROW, RIGHT_ARROW, LEFT_ARROW};

  class InputManager {
    public:
      InputManager() {}
      ~InputManager() {}

      Key getKeyPressed();

    private:
  };
}

#endif
