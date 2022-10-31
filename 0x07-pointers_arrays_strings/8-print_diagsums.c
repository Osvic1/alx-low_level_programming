/*
 * File: 8-print_diagsums.c
 * Auth: Timothy Victor
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: pointer to the matrix
 * @size: size of square
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			sum1 += a[i];
		}
		if (i != 0 && i % (size - 1) == 0 && i < (size * size) - size + 1)
		{
			sum2 += a[i];
		}
	}

	printf("%d, %d\n", sum1, sum2);
}
