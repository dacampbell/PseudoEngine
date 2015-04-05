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
	
	"src/luna/TextureManager.cpp"
	"src/luna/ViewPort.cpp"
	
	)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
set(CMAKE_CXX_FLAGS "-std=c++0x")

find_package(SFML REQUIRED system graphics window)
include_directories(${SFML_INCLUDE_DIRS})

find_package(LuaBind REQUIRED)
include_directories(${LUABIND_INCLUDE_DIRS})

find_package(Box2D REQUIRED)
include_directories(${BOX2D_INCLUDE_DIRS})

install(TARGETS pseudoengine RUNTIME DESTINATION bin)

target_link_libraries(
    pseudoengine
    ${SFML_LIBRARIES}
    ${LUABIND_LIBRARY}
    ${BOX2D_LIBRARY}
    yaml-cpp
    )
