#include "main.h"
/**
 * puts2 - prints every other character
 * @str: string
 * Return: always 0
**/
void puts2(char *str)
{
int x, y;

for (x = 0; str[x] != '\0'; x++)
{
	if (x % 2 == 0)
{
	y = str[x];
	_putchar(y);
}
}
_putchar('\n');
}
