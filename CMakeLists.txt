cmake_minimum_required(VERSION 3.22.0)
project(tribSOLVER VERSION 0.1.0 LANGUAGES CXX)

# include(CTest)
# enable_testing()
add_executable(tribSOLVER src/main.cpp src/domain.cpp src/utility.cpp src/moes.cpp src/internal_domain.cpp)

target_include_directories(tribSOLVER PUBLIC include)
target_include_directories(tribSOLVER PRIVATE src/include)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
