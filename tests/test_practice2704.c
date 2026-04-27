#include "unity.h"
#include "embeddedjourney/practice2704.h"

void test_counter_call(void){
    uint8_t result;
    for(uint8_t i =0; i<10; i++){
        result = counter_function();
    }

    TEST_ASSERT_EQUAL_UINT8(10, result);
}

void test_error_table_valid(void){
    uint8_t error_code = 4;
    const char *result = get_error_string(error_code);
    TEST_ASSERT_EQUAL_STRING("Error 3214",result);
}

void test_error_table_valid2(void){
    uint8_t error_code = 1;
    const char *result = get_error_string(error_code);
    TEST_ASSERT_EQUAL_STRING("Error555",result);
}

void test_error_table_invalid(void){
    uint8_t error_code = 14;
    const char *result = get_error_string(error_code);
    TEST_ASSERT_EQUAL_STRING("NA",result);
}