/*
 * File: 0-malloc_checked.c
 * Auth: Timothy Victor
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *tim = malloc(b);

	if (tim == NULL)
		exit(98);

	return (tim);
}
