set(HEADER_LIST "${GameProject_SOURCE_DIR}/gamelib/include/gamelib/gamelib.h")

add_library(game_library gamelib.cpp ${HEADER_LIST})

target_include_directories(game_library PUBLIC ../include)

target_link_libraries(game_library PUBLIC engine_library)
