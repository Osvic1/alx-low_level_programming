/*
 * File: 8-print_square.c
 * Auth: Timothy Victor
 */

#include "main.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{

int height;
int width;

if (size <= 0)

_putchar('\n');

else

{

for (height = 0; height < size; height++)
{

for (width = 0; width < size; width++)
_putchar('#');

_putchar('\n');
}

}






}
