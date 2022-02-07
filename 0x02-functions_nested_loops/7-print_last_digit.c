#include "main.h"
/**
 * print_last_digit - print last digit
 *@i: variable
 *Return: always 0
**/

int print_last_digit(int i)
{
int x = i % 10;

if (i < 0)

x = x * -1;

_putchar(x + '0');

return (x);
}

