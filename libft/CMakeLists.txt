# CMakeLists.txt for libft

cmake_minimum_required( VERSION 3.25 )
project( libft )

message( STATUS "Configuring Libft ..." )

###
#   Options
#
option( WITH_MEMLIST "Use linked list for heap-allocated memory" ON )
#mark_as_advanced( WITH_MEMLIST )
option( VERBOSE_MAKEFILE "Be verbose" OFF )
#mark_as_advanced( VERBOSE_MAKEFILE )
option( MAKE_TESTS "Compile tests" OFF )

if ( NOT WITH_MEMLIST )
  add_compile_definitions( NMEMLIST )
endif()

if ( VERBOSE_MAKEFILE )
  set( CMAKE_VERBOSE_MAKEFILE ON CACHE BOOL "" FORCE )
endif()

if ( UNIX )
  add_compile_definitions( LINUX )
endif()

###
#   Compile flags
#
set( CMAKE_C_FLAGS "-Wall -Wextra" CACHE STRING "" FORCE )
set( CMAKE_C_FLAGS_DEBUG "-g -fsanitize=address -fno-omit-frame-pointer" CACHE STRING "" FORCE )
set( CMAKE_C_FLAGS_RELEASE "-Werror -DNDEBUG" CACHE STRING "" FORCE )

###
#   libft
#
file( GLOB SOURCES *.c )
add_library( ft STATIC ${SOURCES} )

###
#   Subdirectories TODO
#
if ( MAKE_TESTS )
  add_subdirectory( tests )
endif()

# vi: ts=2 sw=2 et
