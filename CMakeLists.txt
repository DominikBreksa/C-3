cmake_minimum_required(VERSION 3.14)

project(C-3)

add_subdirectory(Libraries/glew/)
add_subdirectory(Libraries/glfw/)
add_subdirectory(Libraries/glm/)
add_subdirectory(Libraries/glad/)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Libraries/glew)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Libraries/glfw)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Libraries/glm)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Libraries/glad)

target_link_libraries(${PROJECT_NAME} libglew_static glfw glm glad)
