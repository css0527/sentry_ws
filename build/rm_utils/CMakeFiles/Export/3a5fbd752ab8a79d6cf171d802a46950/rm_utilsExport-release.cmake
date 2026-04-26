#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rm_utils::rm_utils" for configuration "Release"
set_property(TARGET rm_utils::rm_utils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(rm_utils::rm_utils PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/librm_utils.so"
  IMPORTED_SONAME_RELEASE "librm_utils.so"
  )

list(APPEND _cmake_import_check_targets rm_utils::rm_utils )
list(APPEND _cmake_import_check_files_for_rm_utils::rm_utils "${_IMPORT_PREFIX}/lib/librm_utils.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
