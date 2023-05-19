project(pingpong)

set(PINGPONG_SRC_FILES
	src/pingpong.cpp
)

add_library(pingpong_lib STATIC ${PINGPONG_SRC_FILES})