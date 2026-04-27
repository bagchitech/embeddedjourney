/*
 * Declare: uint8_t arr[] = {10, 20, 30, 40, 50};
 *
 * Declare a pointer:  uint8_t *p = arr;
 *
 * Using ONLY p (no arr[i] allowed):
 *   - print all 5 values forward using p++
 *   - reset p to arr
 *   - print all 5 values backward
 *     (move p to last element first, then p--)
 *
 * Answer in a comment:
 *   When you do p++, how many bytes does
 *   the address actually move? Why?
 */

#ifndef POINTERWALK_H
#define POINTERWALK_H

#include<stdint.h>
#include<stdio.h>

 void pointer_walk(void);

 #endif