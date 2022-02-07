#include "main.h"
/**
 * print_last_digit - print last digit
 *@y: variable
 *Return: always 0
**/

int print_last_digit(int y)
{
int x = y % 10;

if (y < 0)

x = x * -1;

_putchar(x + '0');

return (x);
}

