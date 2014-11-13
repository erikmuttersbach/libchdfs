add_library (conf Configurable.cc Configuration.cc Configured.cc)
target_include_directories (conf PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})