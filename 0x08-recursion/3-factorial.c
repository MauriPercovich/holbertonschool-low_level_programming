#include "main.h"
/**
 * factorial - factorial
 * @n: number
 * return: always o
**/
int factorial(int n)
{

if (n == 0)
{
	return (1);
}
else if (n > 0)
{
	return (n * factorial(n - 1));
}
else
{
	return (-1);
}
}
