/*
 * File: 3-array_range.c
 * Auth: Timothy Victor
 */
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Create array of integers filled with numbers from min to max
 * @min: First number in the array
 * @max: Largest number in the array
 *
 * Return: Pointer to new array, NULL if failed
 */
int *array_range(int min, int max)
{
int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);

}
