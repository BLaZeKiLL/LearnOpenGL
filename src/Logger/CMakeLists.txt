find_package(spdlog CONFIG REQUIRED)

add_library(LGL_Logger src/Logger.cpp include/Logger.h)

if (CMAKE_BUILD_TYPE MATCHES "Debug")
    target_compile_options(LGL_Logger PUBLIC /MTd)
else()
    target_compile_options(LGL_Logger PUBLIC /MT)
endif()

target_link_libraries(LGL_Logger PUBLIC spdlog::spdlog_header_only)

target_include_directories(LGL_Logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)