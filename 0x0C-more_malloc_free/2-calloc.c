/*
 * File: 2-calloc.c
 * Auth: Timothy Victor
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int ar_size, i;

	if (nmemb == 0 || size == 0)

		return (NULL);

	ar_size = nmemb * size;

	ar = malloc(ar_size);

	if (ar == NULL)

		return (NULL);

	for (i = 0; i < ar_size; i++)
	{
		ar[i] = '\0'

	}
	return (ar);
}
