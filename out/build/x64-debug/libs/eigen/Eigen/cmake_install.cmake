# Install script for directory: C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen

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

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE FILE FILES
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Cholesky"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/CholmodSupport"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Core"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Dense"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Eigen"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Eigenvalues"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Geometry"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Householder"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/IterativeLinearSolvers"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Jacobi"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/LU"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/MetisSupport"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/OrderingMethods"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/PaStiXSupport"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/PardisoSupport"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/QR"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/QtAlignedMalloc"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SPQRSupport"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SVD"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/Sparse"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SparseCholesky"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SparseCore"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SparseLU"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SparseQR"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/StdDeque"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/StdList"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/StdVector"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/SuperLUSupport"
    "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/UmfPackSupport"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Devel" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/eigen3/Eigen" TYPE DIRECTORY FILES "C:/VisualStudioProjects/3D-Prog-Compulsory-Final/libs/eigen/Eigen/src" FILES_MATCHING REGEX "/[^/]*\\.h$")
endif()

