cmake_minimum_required(VERSION 3.20)
project(demo)

set(CMAKE_CXX_STANDARD 20)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED gtk4)
include_directories(${GTK4_INCLUDE_DIRS})
link_directories(${GTK4_LIBRARY_DIRS})
add_definitions(${GTK4_CFLAGS_OTHER})

pkg_check_modules(GTKMM REQUIRED gtkmm-4.0)
include_directories(${GTKMM_INCLUDE_DIRS})
link_directories(${GTKMM_LIBRARY_DIRS})

# 用于取消显示命令行窗口
add_link_options(-mwindows)

add_executable(demo main.cc hw.cc)

target_link_libraries(demo ${GTKMM_LIBRARIES})