/*
 * File: 100-get_endianness.c
 * Auth: Timothy Victor
 */

#include "main.h"

/**
  * get_endianness - checks endianess.
  * Return: 0 if big endian, 1 if little endian.
  */
int get_endianness(void)
{
	int i = 1;
	char *ch = (char *)&i;

	if (*ch)
		return (1);

else
	return (0);
}
