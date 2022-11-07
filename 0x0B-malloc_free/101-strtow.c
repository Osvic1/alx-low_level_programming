/*
 * File: 101-strtow.c
 * Auth: Timothy Victor
 */

#include "main.h"

/**
 * alloc - allocates space in memory for an array
 * @str: string
 * @len: length of string
 * @size: size of array
 *
 * Return: a pointer to the array or null if allocation was unsucessful
 */
char **alloc(char *str, int len, int size)
{
	int i, j, wide;
	char **a, before;

	a = malloc((size + 1) * sizeof(char *));
	before = ' ';

	for (i = 0; i < size; i++)
	{
		while (j < len)
		{
			if (str[j] == ' ' && before != ' ')
			{
				before = ' ';
				j++;
				break;
			}
			if (str[j] != ' ')
				wide++;
			before = str[j];
			j++;
		}

		a[i] = malloc((wide + 1) * sizeof(char));
		if (a[i] == NULL)
		{
			return (NULL);
		}
		wide = 0;
	}
	a[size] = NULL;

	return (a);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings or NULL if error
 */
char **strtow(char *str)
{
	char **a, before = ' ';
	int i, j = 0, k = 0, c = 0, len, size = 0;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
			c = 1;
		if (str[i] != ' ' && before == ' ')
			size++;
		before = str[i];
	}
	a = alloc(str, len, size);
	if (a == NULL || c == 0)
		return (NULL);
	before = ' ';
	for (i = 0; i < size; i++)
	{
		while (j < len)
		{
			if (str[j] == ' ' && before != ' ')
			{
				before = ' ';
				j++;
				break;
			}
			if (str[j] != ' ')
			{
				a[i][k] = str[j];
				k++;
			}
			before = str[j];
			j++;
		}
		a[i][k] = '\0';
		k = 0;
	}
	return (a);
}
