#include "embeddedjourney/practice2604.h"

UART_t uart_sim;
volatile UART_t *uart = &uart_sim;

/*Send data through uart without polling*/
void uart_send_byte(uint8_t data){
    if(uart->STATUS & TX_READY)
    {
        uart->DATA = data;
    }
}
uint8_t uart_read_byte(void){
    if(uart->STATUS & RX_READY){
        return uart->DATA;
    }
    return 0;
}