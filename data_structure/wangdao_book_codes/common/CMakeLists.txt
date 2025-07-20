# Common library CMakeLists.txt

# Collect all header files in this directory
file(GLOB COMMON_HEADERS "*.h")

# If there are any source files in this directory, add them here
file(GLOB COMMON_SOURCES "*.c")

# Add a library for the common code (mostly headers)
add_library(common INTERFACE)

# Set include directories for targets that link against common
target_include_directories(common INTERFACE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/..>
    $<INSTALL_INTERFACE:include>
)

# Install headers
install(FILES ${COMMON_HEADERS}
        DESTINATION include/wangdao/common)
