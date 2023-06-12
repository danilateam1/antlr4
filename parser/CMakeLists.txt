cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(samples_antlr)

set(TARGET parser)

set(CMAKE_CXX_STANDART 17)

file(GLOB TARGET_SRC "*.c*")
file(GLOB TARGET_HD  "*.h*")

add_executable(${TARGET} ${TARGET_SRC} ${TARGET_HD})

set_target_properties(${TARGET} PROPERTIES LINKER_LANGUAGE CXX)
target_compile_features(${TARGET} PRIVATE cxx_std_17)

target_include_directories(${TARGET} PUBLIC ${PROJECT_SOURCE_DIR}/../antlr4/include/antlr4-runtime)
target_link_libraries(${TARGET} ${PROJECT_SOURCE_DIR}/../antlr4/lib/antlr4-runtime.lib)