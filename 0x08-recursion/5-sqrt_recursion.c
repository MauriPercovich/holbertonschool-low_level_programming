#include "main.h"
/**
 * _sqrt_recursion - factorial
 * @n: number
 * Return: always 0
**/
int _sqrt_recursion(int n)
{
int y, z;

if (n < 0)
	{
	return (-1);
	}
else if (n == 1)
{
	return (n);
}

else if (n == 0)
{
	        return (0);
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
return (0);
}
