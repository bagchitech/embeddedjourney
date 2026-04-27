#include "unity.h"

void test_known_buffer_sum(void);
    void test_single_element(void);
    void test_all_zeros(void);
    void test_partial_buffer(void);
    void test_size_zero_returns_zero(void);
    void test_uint8_overflow_wraps(void);

    void test_even_element_size(void);
    void test_odd_element_size(void);
    void test_singular_element_size(void);

    void test_integer_swap(void);

    void test_cmd_table_1(void);
    void test_cmd_table_2(void);
    void test_cmd_table_edge(void);
    void test_uart_tx_rx1(void);
    void test_uart_tx_rx2(void);
    void test_tx_not_set(void);
    void test_rx_not_set(void);
    void test_counter_call(void);

    void test_error_table_invalid(void);
    void test_error_table_valid(void);
    void test_error_table_valid2(void);


void setUp(void)    {}
void tearDown(void) {}

int main(void)
{
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
    RUN_TEST(test_uart_tx_rx1);
    RUN_TEST(test_uart_tx_rx2);
    RUN_TEST(test_tx_not_set);
    RUN_TEST(test_rx_not_set);

    RUN_TEST(test_counter_call);
    RUN_TEST(test_error_table_invalid);
    RUN_TEST(test_error_table_valid);
    RUN_TEST(test_error_table_valid2);

    return UNITY_END();
}