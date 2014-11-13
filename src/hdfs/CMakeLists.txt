add_subdirectory (protocol)

add_library (hdfs DFSClient.cc DFSConfigKeys.cc SocketCache.cc)
target_include_directories (hdfs PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

