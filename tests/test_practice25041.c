#include "unity/unity.h"
#include "practice25041.h"

void setUp(void)    {}
void tearDown(void) {}

/* --- normal cases --- */

void test_known_buffer_sum(void) {
    /* 1+2+3+4+5+6+8+7+10+12 = 58 */
    TEST_ASSERT_EQUAL_UINT8(58, array_sum(buffer, BUFFER_SIZE));
}

void test_single_element(void) {
    uint8_t arr[] = {42};
    TEST_ASSERT_EQUAL_UINT8(42, array_sum(arr, 1));
}

void test_all_zeros(void) {
    uint8_t arr[] = {0, 0, 0, 0};
    TEST_ASSERT_EQUAL_UINT8(0, array_sum(arr, 4));
}

void test_partial_buffer(void) {
    /* first 3 elements of buffer: 1+2+3 = 6 */
    TEST_ASSERT_EQUAL_UINT8(6, array_sum(buffer, 3));
}

/* --- edge cases --- */

void test_size_zero_returns_zero(void) {
    uint8_t arr[] = {99, 100};
    TEST_ASSERT_EQUAL_UINT8(0, array_sum(arr, 0));
}

void test_uint8_overflow_wraps(void) {
    /* uint8_t max is 255. 200+100 = 300, wraps to 44 */
    uint8_t arr[] = {200, 100};
    TEST_ASSERT_EQUAL_UINT8(44, array_sum(arr, 2));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_known_buffer_sum);
    RUN_TEST(test_single_element);
    RUN_TEST(test_all_zeros);
    RUN_TEST(test_partial_buffer);
    RUN_TEST(test_size_zero_returns_zero);
    RUN_TEST(test_uint8_overflow_wraps);
    UNITY_END();
    return 0;
}