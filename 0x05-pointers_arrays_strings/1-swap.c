/*
 * File: 1-swap.c
 * Auth: Timothy Victor
 */

#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 */
void swap_int(int *a, int *b)
{

int c; /* c is our third variable or constant*/

c = *a;
*a = *b;
*b = c;


}
