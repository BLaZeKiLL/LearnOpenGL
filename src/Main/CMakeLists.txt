add_executable(LearnOpenGL src/main.cpp)

target_link_libraries(LearnOpenGL PRIVATE glfw glad::glad LGL_Logger)

target_include_directories(LearnOpenGL PRIVATE "${PROJECT_BINARY_DIR}")
