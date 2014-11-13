add_library (fs
    FileSystem.cc
    Path.cc)
target_include_directories (fs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})