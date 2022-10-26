/*
 * File: 101-print_number.c
 * Auth: Timothy Victor
 */

#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int digit = 1000000000;
	unsigned int num = n * 10;

	if (n == 0)
	{
		_putchar(n + 48);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
			num = -num;
		}
		while (digit > num)
			digit /= 10;
		while (digit /= 10)
			_putchar(((n / digit) % 10) + 48);
	}
}
