#include "unity/unity.h"
#include "practice2504.h"

void setUp(void)    {}
void tearDown(void) {}

/* --- normal cases array sum --- */

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

/* --- normal cases array reverse --- */

void test_odd_element_size(void){
    uint8_t input[] = {1,2,3,4,5};
    uint8_t expected[] = {5,4,3,2,1};
    array_reverse(input,5);
    TEST_ASSERT_EQUAL_UINT8_ARRAY(expected, input, 5);
}


void test_even_element_size(void){
    uint8_t input[] = {1,2,3,5};
    uint8_t expected[] = {5,3,2,1};
    array_reverse(input,4);
    TEST_ASSERT_EQUAL_UINT8_ARRAY(expected, input, 4);
}

void test_singular_element_size(void){
    uint8_t input[] = {2};
    uint8_t expected[] = {2};
    array_reverse(input,1);
    TEST_ASSERT_EQUAL_UINT8_ARRAY(expected, input, 1);
}


/*  ------normal case integer swap---*/

void test_integer_swap(void){
    int a = 6;
    int b = 9;
    swap_integers(&a,&b);
    TEST_ASSERT_EQUAL_INT(a,9);
    TEST_ASSERT_EQUAL_INT(b,6);
}

/*** Command Table test cases ****/
void test_cmd_table_1(void){
    handle_command(3);
    TEST_ASSERT_EQUAL_UINT8(cmd_response,4);
}

void test_cmd_table_2(void){
    handle_command(2);
    TEST_ASSERT_EQUAL_UINT8(cmd_response,3);
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

void test_cmd_table_edge(void){
    handle_command(7);
    TEST_ASSERT_EQUAL_UINT8(cmd_response,99);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_known_buffer_sum);
    RUN_TEST(test_single_element);
    RUN_TEST(test_all_zeros);
    RUN_TEST(test_partial_buffer);
    RUN_TEST(test_size_zero_returns_zero);
    RUN_TEST(test_uint8_overflow_wraps);

    RUN_TEST(test_even_element_size);
    RUN_TEST(test_odd_element_size);
    RUN_TEST(test_singular_element_size);

    RUN_TEST(test_integer_swap);

    RUN_TEST(test_cmd_table_1);
    RUN_TEST(test_cmd_table_2);
    RUN_TEST(test_cmd_table_edge);
    UNITY_END();
    return 0;
}