cmake_minimum_required(VERSION 3.15...4.3.3)

project(
  GameProject
  VERSION 0.1
  LANGUAGES CXX)

add_subdirectory(enginelib/src)
add_subdirectory(gamelib/src)

add_subdirectory(apps)
