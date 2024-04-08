# Install script for directory: C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE FILE FILES
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Cholesky"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/CholmodSupport"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Core"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Dense"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Eigen"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Eigenvalues"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Geometry"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Householder"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/IterativeLinearSolvers"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Jacobi"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/LU"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/MetisSupport"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/OrderingMethods"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/PaStiXSupport"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/PardisoSupport"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/QR"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/QtAlignedMalloc"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SPQRSupport"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SVD"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Sparse"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SparseCholesky"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SparseCore"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SparseLU"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SparseQR"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/StdDeque"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/StdList"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/StdVector"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SuperLUSupport"
    "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/UmfPackSupport"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE DIRECTORY FILES "C:/Dokumenter/SpiltekV2024/3D_Prog/3D-Prog-Compulsory-Final/libs/eigen/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

