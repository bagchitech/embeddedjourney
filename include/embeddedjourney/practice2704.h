 /* 
 *Write a function:
 *   uint32_t call_counter(void)
 * that returns how many times it has been called.
 * No global variables allowed.
 *
 * Then write a second function in a separate
 * .c file (simulate with a comment block)
 * that tries to access the counter variable
 * directly. Explain in a comment why it cannot.
 * 
 * 
 * You have error codes (0–4) that map to
 * human-readable strings.
 *
 * Write a lookup table using:
 *   const char * const error_strings[]
 *
 * Write a function:
 *   const char* get_error_string(uint8_t code)
 * that returns the right string safely
 * (handle out-of-range codes).
 *
 * Explain in a comment:
 * Why are there TWO consts in the declaration?
 * What does each one protect?
 *
 */

#ifndef PRACTICE2704_H
#define PRACTICE2704_H

#include<stdint.h>

uint8_t counter_function(void);

/* Error table declaration*/
 extern const char * const error_strings[5];

 const char* get_error_string(uint8_t code);


#endif