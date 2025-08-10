# Sort implementation CMakeLists.txt

# Collect header files in this directory
file(GLOB SORT_HEADERS "*.h")

# Collect source files in this directory
file(GLOB SORT_SOURCES "*.c")

# Create a library for tree implementations
add_library(sort STATIC ${SORT_SOURCES})

# Link with the common library for access to utility functions and types
target_link_libraries(sort PUBLIC common)

# Include directories
target_include_directories(sort PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)
