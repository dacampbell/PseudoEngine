project(pseudoengine)

cmake_minimum_required(VERSION 2.8)

add_executable(pseudoengine 
	"src/main.cpp"
	"src/Engine.cpp"
	"src/World.cpp"
	
	"src/System.cpp"
	"src/RenderSystem.cpp"
	"src/LocationSystem.cpp"
	
	"src/LoadSystem.cpp"
	
	"src/Component.cpp"
	"src/TextureComponent.cpp"
	"src/LocationComponent.cpp"
	)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
set(CMAKE_CXX_FLAGS "-std=c++0x")	

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

install(TARGETS pseudoengine RUNTIME DESTINATION bin)

target_link_libraries(
    pseudoengine
    ${SDL2_LIBRARIES}
    yaml-cpp
    )
