/*
 * You have a uint8_t buffer of 10 bytes.
 * Without using array indexing (buf[i] is banned),
 * write a function that sums all 10 bytes using
 * only pointer arithmetic.
 * 
 * Then write a second version that does it in reverse
 * (from last element to first).
 */
#ifndef PRACTICE25041_H
#define PRACTICE25041_H
 #include <stdio.h>
 #include <stdint.h>


 /*Buffer Declaration*/
 #define BUFFER_SIZE 10

extern uint8_t buffer[BUFFER_SIZE];

 /*Calculate the sum of the elements in the array*/
 uint8_t array_sum(uint8_t *arr, uint8_t size);

 /*Reverse the elemnts of the array*/
 void array_reverse(uint8_t *arr, uint8_t size);

 #endif