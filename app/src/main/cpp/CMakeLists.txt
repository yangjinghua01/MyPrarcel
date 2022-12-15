
cmake_minimum_required(VERSION 3.10.2)

# Declares and names the project.

project("myprarcel")
#批量导入
file(GLOB allSource *.c *cpp *.h)
add_library( # Sets the name of the library.
             native-lib
             SHARED
             ${allSource})

find_library(
              log-lib
              log )

target_link_libraries(
                       native-lib

                       ${log-lib} )