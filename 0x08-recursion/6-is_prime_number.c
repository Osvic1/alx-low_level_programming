/*
 * File: 6-is_prime_number.c
 * Auth: Brennan D Baraban
 */

#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if numberis prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_prime(n, 2));
}

/**
 * check_prime - checks if a number is prime number
 * @n: the number to check
 * @i: start
 *
 * Return: 1 if number is prime and 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i > n / 2)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (check_prime(n, i + 1));
}
