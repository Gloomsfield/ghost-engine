cmake_minimum_required(VERSION 3.30)

project(ghost)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(external/fastgltf/)
add_subdirectory(external/fmt/)
add_subdirectory(external/glm/)
add_subdirectory(external/vk-bootstrap/)
add_subdirectory(external/VulkanMemoryAllocator/)

find_package(SDL2 REQUIRED)
find_package(Vulkan REQUIRED)

set(SOURCES src/main.cpp)

add_executable(ghost ${SOURCES})

target_include_directories(ghost PUBLIC includes)
target_include_directories(ghost PUBLIC ${SDL2_INCLUDE_DIRS})
target_include_directories(ghost PUBLIC ${Vulkan_INCLUDE_DIRS})
target_include_directories(ghost PUBLIC external/fastgltf/include)
target_include_directories(ghost PUBLIC external/VulkanMemoryAllocator/include)
target_include_directories(ghost PUBLIC external/vk-bootstrap/src)
target_include_directories(ghost PUBLIC external/fmt/include)
target_include_directories(ghost PUBLIC external/imgui)
target_include_directories(ghost PUBLIC external/glm)
target_include_directories(ghost PUBLIC external)

target_link_libraries(ghost ${SDL2_LIBRARIES})
target_link_libraries(ghost ${Vulkan_LIBRARIES})
