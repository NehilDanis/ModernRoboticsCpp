project(ModernRoboticsCppTest)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(${PROJECT_NAME}
  ${CMAKE_CURRENT_SOURCE_DIR}/ModernRoboticsLibTest.cc
)

target_include_directories(${PROJECT_NAME} 
PRIVATE 
$<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/ModernRoboticsCppLib/include)

target_link_libraries(${PROJECT_NAME}
  GTest::gtest_main
  ModernRoboticsCppLib
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})