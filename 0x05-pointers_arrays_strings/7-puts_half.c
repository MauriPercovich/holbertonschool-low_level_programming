#include "main.h"
/**
 * puts_half - prints second half
 * @str: string
 * Return: always 0
**/
void puts_half(char *str)
{
int x, y;

for (x = 0; str[x] != '\0'; x++)
{
}

if ((x - 1) % 2 == 0)
{

for ((y = (x - 1) / 2); str[y] != '\0'; y++)
{
_putchar(str[y]);
}
}
else
{
for ((y = (x - 2) / 2); str[y] != '\0'; y++)
{
_putchar(str[y]);
}
}
_putchar('\n');
}
