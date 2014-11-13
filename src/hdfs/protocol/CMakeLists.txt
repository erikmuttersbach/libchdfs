add_library (protocol FSConstants.cc ClientProtocol.cc)
target_include_directories (protocol PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

