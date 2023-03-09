#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "geometric_shapes::geometric_shapes" for configuration "Release"
set_property(TARGET geometric_shapes::geometric_shapes APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(geometric_shapes::geometric_shapes PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libgeometric_shapes.so.2.1.2"
  IMPORTED_SONAME_RELEASE "libgeometric_shapes.so.2.1.2"
  )

list(APPEND _IMPORT_CHECK_TARGETS geometric_shapes::geometric_shapes )
list(APPEND _IMPORT_CHECK_FILES_FOR_geometric_shapes::geometric_shapes "${_IMPORT_PREFIX}/lib/libgeometric_shapes.so.2.1.2" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
