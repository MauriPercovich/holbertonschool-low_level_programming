#include "main.h"
#include <stdlib.h>
/**
 * print_binary - returns in binary
 * @n: number
**/
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
