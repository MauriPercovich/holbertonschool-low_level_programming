#include "main.h"

/**
 * is_prime_number - checks if a num is prime
 * @n: num
 * Return: 1 if n is prime, otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (1);
	}
	if (n == 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (0);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
