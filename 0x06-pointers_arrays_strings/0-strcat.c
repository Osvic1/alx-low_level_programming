/*
 * File: 0-strcat.c
 * Auth: Timothy Victor
 */
#include <string.h>
#include "main.h"

/**
 *_strcat - concatenates two strings
 *null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)
{

char s1[] = "dest";
char s2[] = "src";

strcat(s1, s2);

return (dest);

}
