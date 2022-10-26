/*
 * File: 3-strcmp.c
 * Auth: Timothy Victor
 */


#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: a pointer the first string
 * @s2: a pointer to the second string
 *
 * Return: 0 if equal, negative is s1 is less than s2 and positive
 * if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int val = strcmp(s1, s2);

	return (val);
}

