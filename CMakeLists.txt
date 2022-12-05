cmake_minimum_required(VERSION 3.7...3.24)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(AVX_TEST VERSION 1.0
    DESCRIPTION "AVX Test"
    LANGUAGES CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(avx_test
    src/main.cc
)

target_compile_features(avx_test PRIVATE cxx_std_20)
target_compile_options(avx_test PRIVATE "-fmodules-ts")

target_link_libraries(avx_test
    ${CONAN_LIBS}
)
