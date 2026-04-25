# Helper function — one line adds a complete test executable
function(add_unity_test TEST_NAME)
    add_executable(${TEST_NAME}
        ${TEST_NAME}.c
    )
    target_link_libraries(${TEST_NAME}
        PRIVATE practice25041 unity
    )
    add_test(NAME ${TEST_NAME} COMMAND ${TEST_NAME})
endfunction()

# Register tests here — one line per test file
add_unity_test(test_practice25041)