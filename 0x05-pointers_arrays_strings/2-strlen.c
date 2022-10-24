/*
 * File: 2-strlen.c
 * Auth: Timothy Victor
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: string to evaluate
 *
 * Return: The length of @str.
 */

int _strlen(char *s)
{

int length;
length = 0;

while (s[length])
length++;

return (length);

}
