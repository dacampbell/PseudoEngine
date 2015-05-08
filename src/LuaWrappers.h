//Lua Wrapper Functions
//Created by Duncan Campbell

extern "C" {
  #include "lua.h"
}

#include "luabind/luabind.hpp"
#include "luabind/function.hpp"

#include "LocationComponent.h"
#include "LocationSystem.h"

lua_State *currentLuaState;

void setComponetX(int component, int x) {
  LocationComponent* loc = (LocationComponent*)Engine::world->getSystem("Location System")->getComponent(component);
  loc->setX(x);
}

void init_lua() {
  currentLuaState = luaL_newstate();
  luabind::open(currentLuaState);
}

void close_lua() {
  lua_close(currentLuaState);
}
