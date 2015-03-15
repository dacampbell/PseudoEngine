project(pseudoengine)

cmake_minimum_required(VERSION 2.8)

add_executable(pseudoengine 
	"src/main.cpp"
	"src/Engine.cpp"
	"src/World.cpp"
	
	"src/System.cpp"
	"src/LocationSystem.cpp"
	"src/TextureSystem.cpp"
	
	"src/LoadSystem.cpp"
	
	"src/Component.cpp"
	"src/TextureComponent.cpp"
	"src/LocationComponent.cpp"
	)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
set(CMAKE_CXX_FLAGS "-std=c++0x")	

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

find_package(LuaBind REQUIRED)
include_directories(${LUABIND_INCLUDE_DIRS})

find_package(Box2D REQUIRED)
include_directories(${BOX2D_INCLUDE_DIRS})

install(TARGETS pseudoengine RUNTIME DESTINATION bin)

target_link_libraries(
    pseudoengine
    ${SDL2_LIBRARIES}
    ${LUABIND_LIBRARIES}
    ${BOX2D_LIBRARIES}
    yaml-cpp
    )
