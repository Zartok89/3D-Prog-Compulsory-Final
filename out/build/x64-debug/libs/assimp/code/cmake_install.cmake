# Install script for directory: C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/out/install/x64-debug")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "CMAKE_OBJDUMP-NOTFOUND")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "libassimp5.3.0-dev" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/out/build/x64-debug/libs/assimp/lib/assimp-vc143-mtd.lib")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "assimp-dev" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/assimp" TYPE FILE FILES
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/anim.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/aabb.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/ai_assert.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/camera.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/color4.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/color4.inl"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/out/build/x64-debug/libs/assimp/code/../include/assimp/config.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/ColladaMetaData.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/commonMetaData.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/defs.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/cfileio.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/light.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/material.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/material.inl"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/matrix3x3.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/matrix3x3.inl"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/matrix4x4.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/matrix4x4.inl"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/mesh.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/ObjMaterial.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/pbrmaterial.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/GltfMaterial.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/postprocess.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/quaternion.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/quaternion.inl"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/scene.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/metadata.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/texture.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/types.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/vector2.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/vector2.inl"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/vector3.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/vector3.inl"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/version.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/cimport.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/AssertHandler.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/importerdesc.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Importer.hpp"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/DefaultLogger.hpp"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/ProgressHandler.hpp"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/IOStream.hpp"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/IOSystem.hpp"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Logger.hpp"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/LogStream.hpp"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/NullLogger.hpp"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/cexport.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Exporter.hpp"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/DefaultIOStream.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/DefaultIOSystem.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/ZipArchiveIOSystem.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/SceneCombiner.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/fast_atof.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/qnan.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/BaseImporter.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Hash.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/MemoryIOWrapper.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/ParsingUtils.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/StreamReader.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/StreamWriter.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/StringComparison.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/StringUtils.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/SGSpatialSort.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/GenericProperty.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/SpatialSort.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/SkeletonMeshBuilder.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/SmallVector.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/SmoothingGroups.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/SmoothingGroups.inl"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/StandardShapes.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/RemoveComments.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Subdivision.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Vertex.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/LineSplitter.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/TinyFormatter.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Profiler.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/LogAux.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Bitmap.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/XMLTools.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/IOStreamBuffer.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/CreateAnimMesh.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/XmlParser.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/BlobIOSystem.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/MathFunctions.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Exceptional.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/ByteSwapper.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Base64.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "assimp-dev" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/assimp/Compiler" TYPE FILE FILES
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Compiler/pushpack1.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Compiler/poppack1.h"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/assimp/code/../include/assimp/Compiler/pstdint.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/out/build/x64-debug/libs/assimp/code/assimp-vc143-mtd.pdb")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/out/build/x64-debug/libs/assimp/code/assimp-vc143-mt.pdb")
  endif()
endif()

