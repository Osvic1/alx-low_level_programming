/*
 * File: 3-strspn.c
 * Auth: Timothy Victor
 */

#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the substring
 *
 * Return: number of bytes in initial segment of s
 * which consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strspn(s, accept);

	return (i);
}
