//Lua Wrapper Functions
//Created by Duncan Campbell

extern "C" {
  #include "lua.h"
}

#include "luabind/luabind.hpp"
#include "luabind/function.hpp"

#include "LocationComponent.h"
#include "LocationSystem.h"

#include <iostream>

static lua_State *currentLuaState;

void setComponentX(int component, int x) {
  LocationComponent* loc = (LocationComponent*)Engine::world->getSystem("Location System")->getComponent(component);
  loc->setX(x);
}

int  getComponentX(int component) {
  LocationComponent* loc = (LocationComponent*)Engine::world->getSystem("Location System")->getComponent(component);
  return loc->getX();
}

void setComponentY(int component, int y) {
  LocationComponent* loc = (LocationComponent*)Engine::world->getSystem("Location System")->getComponent(component);
  loc->setY(y);
}

int  getComponentY(int component) {
  LocationComponent* loc = (LocationComponent*)Engine::world->getSystem("Location System")->getComponent(component);
  return loc->getY();
}

void print_hello(int number) {
  std::cout << "hello world " << std::endl;
}

void init_lua() {
  currentLuaState = luaL_newstate();
  luabind::open(currentLuaState);

  luabind::module(currentLuaState) [
    luabind::def("print_hello", print_hello)
  ];

  luabind::module(currentLuaState) [
    luabind::def("setComponentX", setComponentX)
  ];

  luabind::module(currentLuaState) [
    luabind::def("getComponentX", getComponentX)
  ];

  luabind::module(currentLuaState) [
    luabind::def("setComponentY", setComponentY)
  ];

  luabind::module(currentLuaState) [
    luabind::def("getComponentY", getComponentY)
  ];

  lua_pushnumber(currentLuaState, 1);
  lua_setglobal(currentLuaState, "dir1");

  lua_pushnumber(currentLuaState, 1);
  lua_setglobal(currentLuaState, "dir2");
}

void lua_run() {
  luaL_dostring(
    currentLuaState,
    "x1 = getComponentX(2505)\n"
    "x2 = getComponentX(2506)\n"
    "y1 = getComponentY(2503)\n"
    "y2 = getComponentY(2504)\n"
    "if x1 < 0 and dir1 == -1 then\n"
    "  dir1 = 1\n"
    "elseif x1 > 500 and dir1 == 1 then\n"
    "  dir1 = -1\n"
    "end\n"
    "if y1 < 0 and dir2 == -1 then\n"
    "  dir2 = 1\n"
    "elseif y1 > 750 and dir2 == 1 then\n"
    "  dir2 = -1\n"
    "end\n"
    "x1 = x1 + dir1\n"
    "x2 = x2 + dir1\n"
    "y1 = y1 + dir2\n"
    "y2 = y2 + dir2\n"
    "setComponentY(2503, y1)\n"
    "setComponentY(2504, y2)\n"
    "setComponentX(2505, x1)\n"
    "setComponentX(2506, x2)\n"
  );
}

void close_lua() {
  lua_close(currentLuaState);
}
