/*
 * File: 7-print_chessboard.c
 * Auth: Timothy Victor
 */

#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of characters
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[j][k]);
		}
		_putchar('\n');
	}
}
