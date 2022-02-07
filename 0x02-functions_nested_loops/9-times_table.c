#include "main.h"
/**
 * times_table - Print
 *
 *Return: Always 0 (Success)
 **/
void times_table(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
{
	_putchar('0');
	_putchar(',');
	for (m = 1; m < 10; m++)
	{
	_putchar(' ');
	if (n * m < 10)
{
	_putchar(' ');
	_putchar(n * m + '0');
}
	else
{
	_putchar((n * m / 10) + '0');
	_putchar((n * m % 10) + '0');
}
	if (m < 9)
{
	_putchar(',');
}
}
	_putchar('\n');
}
}
