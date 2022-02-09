#include "main.h"
/**
 * print_diagonal - prints line with n length
 * @n: length
 * Return: always 0
 **/
void print_diagonal(int n)
{

int x, y;

if (n <= 0)
	_putchar('\n');

	for (x = 0; x < n; x++)
{
	for (y = 0; y <= x; y++)
{
		if (x == y)
		{
			_putchar('\\');
			_putchar('\n');
		}
		else
		{
			_putchar(' ');
		}
}
}
}
