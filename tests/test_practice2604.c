#include "unity.h"
#include "embeddedjourney/practice2604.h"


/* test the tx*/
void test_uart_tx_rx1(void){
    uart->DATA=0;
    uart->STATUS|=(1U<<0);
    uart_send_byte(45);
    uart->STATUS=0;
    uart->STATUS|=(1U<<1);
    uint8_t result = uart_read_byte();
    TEST_ASSERT_EQUAL_UINT8(45,result);
}

void test_uart_tx_rx2(void){
    uart->DATA=0;
    uart->STATUS|=(1U<<0);
    uart_send_byte(201);
    uart->STATUS=0;
    uart->STATUS|=(1U<<1);
    uint8_t result = uart_read_byte();
    uart->STATUS=0;
    TEST_ASSERT_EQUAL_UINT8(201,result);
}

/*edge case*/

void test_tx_not_set(void){
    uart->DATA=0;
    //uart->STATUS|=(1U<<0);
    uart_send_byte(201);
    uart->STATUS=0;
    uart->STATUS|=(1U<<1);
    uint8_t result = uart_read_byte();
    uart->STATUS=0;
    TEST_ASSERT_NOT_EQUAL(201,result);
}

void test_rx_not_set(void){
    uart->DATA=0;
    uart_send_byte(201);
    uart->STATUS=0;
    uart->STATUS|=(1U<<1);
    uint8_t result = uart_read_byte();
    uart->STATUS=0;
    TEST_ASSERT_EQUAL(0,result);
}


