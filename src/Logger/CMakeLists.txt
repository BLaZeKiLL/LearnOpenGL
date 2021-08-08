add_library(LGL_Logger src/Logger.cpp include/Logger.h)

target_link_libraries(LGL_Logger PUBLIC spdlog::spdlog_header_only)

target_include_directories(LGL_Logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)