/*
 * Declare these three variables:
 *   int    a = 10;
 *   float  b = 3.14f;
 *   char   c = 'Z';
 *
 * Without Googling:
 *   - print the VALUE of each
 *   - print the ADDRESS of each using %p
 *   - print the SIZE of each using sizeof()
 *
 * Then declare a pointer to each and:
 *   - change a to 99 using only the pointer
 *   - change c to 'A' using only the pointer
 *   - print both to confirm
 *
 * Question to answer in a comment:
 *   Why are the addresses different sizes
 *   on different machines (32-bit vs 64-bit)?
 */

#ifndef ADDRESSGAME_H
#define ADDRESSGAME_H

#include<stdint.h>
#include<stdio.h>

int address_game(void);

#endif