set(HEADER_LIST
    "${GameProject_SOURCE_DIR}/enginelib/include/enginelib/enginelib.h")

add_library(engine_library enginelib.cpp ${HEADER_LIST})

target_include_directories(engine_library PUBLIC ../include)
