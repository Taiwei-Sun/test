


cmake_minimum_required(VERSION 3.8)

# set the project name
project(Tutorial)

message("12345")
message(TTT=${TTT})

if(TTT STREQUAL "asd")
	message("asd")
elseif(TTT STREQUAL "zxc")
	message("zxc")
elseif(TTT STREQUAL "ccc")
	message("ccc")
else()
	message("None")
endif()

#configure_file(TutorialConfig.h.in TutorialConfig.h)


# add the executable
#add_executable(Tutorial tutorial.cxx)

# specify the C++ standard
#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED True)


#target_include_directories(Tutorial PUBLIC
#                           "${PROJECT_BINARY_DIR}"
#                           )
