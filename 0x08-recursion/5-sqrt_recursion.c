#include "main.h"
/**
 * _sqrt_recursion - factorial
 * @n: number
 * Return: always 0
**/
int _sqrt_recursion(int n)
{
if (n < 0)
	{
	return (0);
	}
else if (n < 2)
{
	return (n);
}
else
{
	y = _sqrt_recursion(n >> 2) << 1;
	z = y + 1;

	if (z * z > n)
	{

		return (y);
	}
	else
		{
			return (z);
		}
}
}
