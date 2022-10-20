/*
 * File: 4-print_most_numbers.c
 * Auth: Timothy Victor
 */

#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)

{

int k;

for (k = 0; k <= 9; k++)

{
if (k != 2 && k != 4)

{
_putchar(k + '0');
}

}

_putchar('\n');



}
