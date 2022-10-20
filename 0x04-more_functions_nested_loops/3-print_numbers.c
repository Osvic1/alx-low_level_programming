/*
 * File: 3-print_numbers.c
 * Auth: Timothy Victor
 */

#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)

{

int k;

for (k = 0; k <= 9; k++)
{
_putchar(k + '0');

}

_putchar('\n')

}
