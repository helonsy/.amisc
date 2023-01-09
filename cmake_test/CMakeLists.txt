# ${CMAKE_CURRENT_SOURCE_DIR}
# SET(filename /tmp/cmake.dat.log.tmp)
# get_filename_component(n ${filename} NAME)
   # =>cmake.dat.log.tmp

#------------------------真实项目-------------------------------------
# ${GAME_SOURCE_DIR}  =>"perforce/stream_depot/master/dev/wolfgang/_games/proven_ground/_source/"
# =>"perforce/stream_depot/master/dev/wolfgang/_games/proven_ground/chaos/_source/_engine/source/"
#-------------------------------------------------------------


cmake_minimum_required(VERSION 3.0)
project(SWAP)



#include_directories(include)






set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fsanitize-recover=address -g")

add_executable(main_cmake main.cpp)
