# Install script for directory: C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/out/install/x64-debug")
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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/unsupported/Eigen" TYPE FILE FILES
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/AdolcForward"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/AlignedVector3"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/ArpackSupport"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/AutoDiff"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/BVH"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/EulerAngles"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/FFT"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/IterativeSolvers"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/KroneckerProduct"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/LevenbergMarquardt"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/MatrixFunctions"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/MoreVectorization"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/MPRealSupport"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/NonLinearOptimization"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/NumericalDiff"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/OpenGLSupport"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/Polynomials"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/Skyline"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/SparseExtra"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/SpecialFunctions"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/Splines"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/unsupported/Eigen" TYPE DIRECTORY FILES "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/unsupported/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/out/build/x64-debug/libs/eigen/unsupported/Eigen/CXX11/cmake_install.cmake")

endif()

