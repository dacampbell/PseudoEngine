add_library(ComponentFramework
    ComponentBase.cpp
    SubsystemBase.cpp
    )

target_include_directories(ComponentFramework PUBLIC
    .
    )

target_compile_options(ComponentFramework PRIVATE -std=c++14)
