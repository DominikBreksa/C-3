cmake_minimum_required(VERSION 3.14)

project(C-3)

add_subdirectory(glew)
add_subdirectory(glfw)
add_subdirectory(glm)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/glew)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/glfw)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/glm)

target_link_libraries(${PROJECT_NAME} libglew_static glfw glm)