
# Hello - Tutorial for C++ projects with CMake

The purpose of the Hello solution is to provide a sample regarding how to build C++ projects with the use of the CMake build system.

## Hello, version 0.1 features

* Print the application name, version and copyright information
* Print "Hello world!"
* Print the current date-time
* Print "Good bye world!"

## Hello, version 0.1 source files

* src/main.cpp

## Hello, version 0.1 architecture

* An executable:
  * Name: hello (or hello.exe on Windows)
  * Sources: main.cpp

## Programming language

* C++14

## The CMake solution

* Configure a solution building an executable:
  * Solution name: **hello**
  * Project name: **hello**
  * Executable name: **hello**
  * Source files:
    * src/main.cpp

* Specify the minimal CMake version (example 3.0)

* Specify the requested C++ standard

## Building the solution

* Build folder: **build**

* CMake generators (use one of them):
  * Unix makefiles
  * Ninja
  * Kate with Unix makefiles
  * Kate with Ninja
  * Codeblocks with Unix makefiles
  * Codeblocks with Ninja
  * Microsoft Visual Studio 2015 (or later)

* Build configurations:
  * Debug/Release

## Running the executable

* build/hello

## CMake commands and variables to use

* add_executable
* cmake_cxx_flags, cmake_cxx_standard, cmake_cxx_standard_required, cmake_cxx_extensions, cmake_compiler_is_gnucxx
* cmake_minimum_required
* cmake_version
* greater
* if/else/endif
* on/off
* project
* set
