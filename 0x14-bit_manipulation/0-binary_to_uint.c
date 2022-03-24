#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function
 * @b: number to print
 * Return: number in uint
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x;
	int base;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	x--;
	for (base = 1; x >= 0; x--, base *= 2)
	{
		result += ((b[x] - '0') * base);
	}
	return (result);
}
