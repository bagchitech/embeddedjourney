file(GLOB TEST_FILES *.c)

add_executable(all_tests ${TEST_FILES})

target_link_libraries(all_tests
    core
    unity
)

add_test(NAME all_tests COMMAND all_tests)