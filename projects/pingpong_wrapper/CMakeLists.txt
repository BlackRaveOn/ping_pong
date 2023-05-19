project(pingpong_wrapper)

set(PINGPONG_WRAPPER_SRC_FILES
	src/pingpong_wrapper.cpp
)

add_executable(pingpong_wrapper ${PINGPONG_WRAPPER_SRC_FILES})
target_link_libraries(pingpong_wrapper PRIVATE pingpong_lib)

set_target_properties(pingpong_wrapper PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin
)