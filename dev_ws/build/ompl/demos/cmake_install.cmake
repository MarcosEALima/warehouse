# Install script for directory: /home/administrador/Desktop/dev_ws/src/ompl/demos

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/administrador/Desktop/dev_ws/install/ompl")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE PROGRAM FILES "/home/administrador/Desktop/dev_ws/build/ompl/share/ompl/demos/KinematicChainPathPlot.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE PROGRAM FILES "/home/administrador/Desktop/dev_ws/build/ompl/share/ompl/demos/OptimalPlanning.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE PROGRAM FILES "/home/administrador/Desktop/dev_ws/build/ompl/share/ompl/demos/PlannerData.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE PROGRAM FILES "/home/administrador/Desktop/dev_ws/build/ompl/share/ompl/demos/Point2DPlanning.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE PROGRAM FILES "/home/administrador/Desktop/dev_ws/build/ompl/share/ompl/demos/RandomWalkPlanner.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE PROGRAM FILES "/home/administrador/Desktop/dev_ws/build/ompl/share/ompl/demos/RigidBodyPlanning.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE PROGRAM FILES "/home/administrador/Desktop/dev_ws/build/ompl/share/ompl/demos/RigidBodyPlanningWithControls.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE PROGRAM FILES "/home/administrador/Desktop/dev_ws/build/ompl/share/ompl/demos/RigidBodyPlanningWithODESolverAndControls.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE PROGRAM FILES "/home/administrador/Desktop/dev_ws/build/ompl/share/ompl/demos/SpaceTimePlanning.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE PROGRAM FILES "/home/administrador/Desktop/dev_ws/build/ompl/share/ompl/demos/StateSampling.py")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE FILE FILES
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/CForestCircleGridBenchmark.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/Diagonal.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/GeometricCarPlanning.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/HybridSystemPlanning.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/HypercubeBenchmark.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/KinematicChainBenchmark.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/LTLWithTriangulation.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/OptimalPlanning.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/PlannerData.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/PlannerProgressProperties.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/Point2DPlanning.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/RigidBodyPlanning.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/RigidBodyPlanningWithControls.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/RigidBodyPlanningWithIK.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/RigidBodyPlanningWithIntegrationAndControls.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/RigidBodyPlanningWithODESolverAndControls.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/SpaceTimePlanning.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/StateSampling.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/ThunderLightning.cpp"
    "/home/administrador/Desktop/dev_ws/src/ompl/demos/TriangulationDemo.cpp"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE DIRECTORY FILES "/home/administrador/Desktop/dev_ws/src/ompl/demos/Koules")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xomplx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ompl/demos" TYPE DIRECTORY FILES "/home/administrador/Desktop/dev_ws/src/ompl/demos/VFRRT")
endif()

