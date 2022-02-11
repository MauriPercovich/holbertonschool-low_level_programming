#include "main.h"
#include <string.h>
/**
 * print_rev - print backwards
 *
 * Return: always 0
**/
void print_rev(char *s)
{


int x;

for (x = strlen(s) - 1; x >= 0; x--)
{
	_putchar(s[x]);
}
	_putchar('\n');
}
