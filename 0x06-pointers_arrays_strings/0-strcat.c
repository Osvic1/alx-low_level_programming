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

int l1, l2, i;

char s1[10] = "dest";
char s2[7] = "src";

l1 = strlen(s1);
l2 = strlen(s2);

for (i = 0; i <= l2; i++)
{

s1[l1 + i] = s2[i];

}

return (dest);

}
