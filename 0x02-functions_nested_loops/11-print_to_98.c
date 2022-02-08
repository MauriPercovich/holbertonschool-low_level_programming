#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - function thar prints numbers to 98
 * @n: number
 * Return: always 0
**/
void print_to_98(int n)
{
while (n <= 97)
{
	if (n != 98)
	printf("%d, ", n);


	else

	printf("%d", n);

	n++;

}

while (n > 97)
{
	if (n != 98)
	printf("%d, ", n);


	else

	printf("%d", n);

	n--;

}

	printf("\n");

}
