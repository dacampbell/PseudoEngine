add_library(Luna
    AudioPlayerInterface.cpp
    InputInterface.cpp
    LunaFactoryInterface.cpp
    MusicInterface.cpp
    ObjectInterface.cpp
    ScreenInterface.cpp
    SoundInterface.cpp
    SpriteInterface.cpp
    TileInterface.cpp
    )

target_include_directories(Luna PUBLIC
    .
    )

target_compile_options(Luna PRIVATE -std=c++14)
