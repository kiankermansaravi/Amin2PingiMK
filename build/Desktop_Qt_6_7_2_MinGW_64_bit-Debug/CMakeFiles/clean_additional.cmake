# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Amin2Pingi_autogen"
  "CMakeFiles\\Amin2Pingi_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Amin2Pingi_autogen.dir\\ParseCache.txt"
  )
endif()
