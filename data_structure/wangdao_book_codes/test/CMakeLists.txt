# Tests CMakeLists.txt

# Collect test source files
file(GLOB TEST_SOURCES "*.c")

# Create executable for each test file
foreach(test_source ${TEST_SOURCES})
    # Get the filename without extension
    get_filename_component(test_name ${test_source} NAME_WE)
    
    # Add executable
    add_executable(${test_name} ${test_source})
    
    # Link with the trees library
    target_link_libraries(${test_name} PRIVATE trees sort common)
    
    # Add to tests
    add_test(NAME ${test_name} COMMAND ${test_name})
endforeach()

# Set include directories
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/..)
