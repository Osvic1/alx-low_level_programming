/*
 * File: 4-strpbrk.c
 * Auth: Timothy Victor
 */

#include "main.h"
#include <string.h>

/**
 * _strstr - finds the first occurence to a substring needle in
 * the string haystack. (\0) are not compared
 * @haystack: the string
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *v = strstr(haystack, needle);

	return (v);
}
