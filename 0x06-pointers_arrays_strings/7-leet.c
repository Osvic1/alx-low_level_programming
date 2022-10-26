/*
 * File: 7-leet.c
 * Auth: Timothy Victor
 */
#include <string.h>
#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{

int i, j, len;
	char upper[6] = {'A', 'E', 'O', 'T', 'L'};
	char lower[6] = {'a', 'e', 'o', 't', 'l'};
	char num_to_replace[6] = {'4', '3', '0', '7', '1'};

	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == upper[j] || str[i] == lower[j])
			{
				str[i] = num_to_replace[j];
				break;
			}
		}
	}

	return (str);
}
