#include "main.h"

/**
 * print_binary - print an integer in binary
 * @num: number to print
 * Return: length
 */

int print_binary(va_list num)
{
	unsigned int i, aux, m, n = 0;
	char *str;

	i = va_arg(num, int);
	m = i;

	if (i == 0)
	{
		_putchar('0');
		return (1);
	}

	while (i > 0)
	{
		i /= 2;
		aux++;
	}

	str = malloc(aux * sizeof(int) + 1);

	if (str == NULL)
	{
		return (-1);
	}

	while (m > 0)
	{
		str[n] = (m % 2) + '0';
		m /= 2;
		n++;
	}
	while (n != 0)
	{
		n--;
		_putchar(str[n]);
	}
	free(str);
return (aux);
}
