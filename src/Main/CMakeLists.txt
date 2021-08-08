find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)

add_executable(LearnOpenGL src/main.cpp)

if (CMAKE_BUILD_TYPE MATCHES "Debug")
    target_compile_options(LearnOpenGL PUBLIC /MTd)
else()
    target_compile_options(LearnOpenGL PUBLIC /MT)
endif()

target_link_libraries(LearnOpenGL PRIVATE glfw glad::glad LGL_Logger)