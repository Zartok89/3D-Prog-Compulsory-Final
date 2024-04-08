cmake_minimum_required(VERSION 3.8)

project("CompulsoryFinal")

# Enable Hot Reload for MSVC compilers if supported.
if(POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
endif()

# Set C++ standard
if (CMAKE_VERSION VERSION_GREATER 3.12)
  set(CMAKE_CXX_STANDARD 20)
  set(CMAKE_CXX_STANDARD_REQUIRED True)
endif()

# Include directories
include_directories(
  core
  includes/imgui
  includes/glad
  includes/stbi
  libs/glm
  libs/assimp-master/include
  libs/eigen
)

# IMGUI headers and sources
set(IMGUI_HEADERS
  includes/imgui/imgui.h
  includes/imgui/imconfig.h
  includes/imgui/imgui_impl_opengl3.h
  includes/imgui/imgui_impl_glfw.h
  includes/imgui/imgui_impl_opengl3_loader.h
)

set(IMGUI_SOURCE
  includes/imgui/imgui.cpp
  includes/imgui/imgui_demo.cpp
  includes/imgui/imgui_draw.cpp
  includes/imgui/imgui_widgets.cpp
  includes/imgui/imgui_impl_opengl3.cpp
  includes/imgui/imgui_impl_glfw.cpp
  includes/imgui/imgui_tables.cpp
)

# Project header and source files
set(HEADER_FILES
  CompulsoryFinal.h
  includes/stbi/stb_image.h
)

set(SRC_FILES
  CompulsoryFinal.cpp
  includes/glad/glad.c
)

# External libraries
add_subdirectory(libs/glfw-3.3.9)
add_subdirectory(libs/assimp-master)
add_subdirectory(libs/glm/glm)
add_subdirectory(libs/eigen)

# Create project executable
add_executable(${PROJECT_NAME} ${IMGUI_HEADERS} ${IMGUI_SOURCE} ${HEADER_FILES} ${SRC_FILES})

# Link libraries
target_link_libraries(${PROJECT_NAME} glfw assimp eigen)

# MSVC specific settings
if(MSVC)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()
