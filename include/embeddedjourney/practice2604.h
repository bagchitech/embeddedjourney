/*
 * A UART peripheral has 3 registers at
 * consecutive 32-bit addresses starting
 * at 0x40011000:
 *   offset 0x00 — STATUS register
 *   offset 0x04 — DATA register
 *   offset 0x08 — CONTROL register
 *
 * Define a struct that maps to this layout.
 * Create a volatile pointer to it at the
 * correct base address.
 *
 * Write two functions:
 *   void uart_send_byte(uint8_t data)
 *   uint8_t uart_read_byte(void)
 *
 * Assume bit 0 of STATUS = TX ready
 *        bit 1 of STATUS = RX ready
 *
 * Do not use magic numbers. Use #define or
 * enum for the bit masks.
 */

#ifndef PRACTICE2604_H
#define PRACTICE2604_H
 #include <stdio.h>
 #include <stdint.h>

typedef struct {
    volatile uint32_t STATUS;
    volatile uint32_t DATA;
    volatile uint32_t CONTROL;
} UART_t;

extern UART_t uart_sim;

extern volatile UART_t *uart;

#define TX_READY (1U << 0)
#define RX_READY (1U << 1)

void uart_send_byte(uint8_t data);
uint8_t uart_read_byte(void);

 #endif