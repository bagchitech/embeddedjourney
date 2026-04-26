/*
 * You have a uint8_t buffer of 10 bytes.
 * Without using array indexing (buf[i] is banned),
 * write a function that sums all 10 bytes using
 * only pointer arithmetic.
 * 
 * Then write a second version that does it in reverse
 * (from last element to first).
 * 
 *  * Write a function:
 *   void swap(int *a, int *b)
 * that swaps two integers.
 * 
 * Restriction: no temporary variable allowed.
 * 
 * 
 *  * You have a simple command system.
 * Commands arrive as a uint8_t (0, 1, 2, 3).
 * Each command maps to a handler function.
 *
 * Write:
 *   void cmd_led_on(void)
 *   void cmd_led_off(void)
 *   void cmd_reset(void)
 *   void cmd_status(void)
 *
 * Then build a dispatch table (array of function
 * pointers) and a single function:
 *   void handle_command(uint8_t cmd)
 * that calls the right handler.
 *
 * No if-else. No switch. Only the table.
 *
 * Follow-up: what happens if cmd = 9?
 * Fix it.
 */
#ifndef PRACTICE2504_H
#define PRACTICE2504_H
 #include <stdio.h>
 #include <stdint.h>


 /*Buffer Declaration*/
 #define BUFFER_SIZE 10

extern uint8_t buffer[BUFFER_SIZE];



 /*Calculate the sum of the elements in the array*/
 uint8_t array_sum(uint8_t *arr, uint8_t size);

 /*Reverse the elemnts of the array*/
 void array_reverse(uint8_t *arr, uint8_t size);

 /*Swap two Integers*/
 void swap_integers(int *a, int *b);



 #endif