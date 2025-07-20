# Trees implementation CMakeLists.txt

# Collect header files in this directory
file(GLOB TREES_HEADERS "*.h")

# Collect source files in this directory
file(GLOB TREES_SOURCES "*.c")

# Create a library for tree implementations
add_library(trees STATIC ${TREES_SOURCES})

# Link with the common library for access to utility functions and types
target_link_libraries(trees PUBLIC common)

# Include directories
target_include_directories(trees PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

# Install rules
install(TARGETS trees
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin)
        
install(FILES ${TREES_HEADERS}
        DESTINATION include/wangdao/trees)
