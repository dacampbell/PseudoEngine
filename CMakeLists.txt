project(pseudoengine)

cmake_minimum_required(VERSION 2.8)

add_executable(pseudoengine 
	"src/main.cpp"
	"src/Engine.cpp"
	"src/Component.cpp"
	"src/ComponentManager.cpp"
	"src/RenderComponent.cpp"
	"src/RenderManager.cpp"
	"src/LocationComponent.cpp"
	"src/LocationManager.cpp")

set(CMAKE_CXX_FLAGS "-std=c++0x")	
	
install(TARGETS pseudoengine RUNTIME DESTINATION bin)

target_link_libraries(
    pseudoengine
    sfml-graphics
    sfml-system
    sfml-window
    sfml-audio
    yaml-cpp
    )
