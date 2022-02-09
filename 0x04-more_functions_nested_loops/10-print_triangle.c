#include "main.h"
/**
 *print_triangle - print a triangle
 *@size: size of triangle
 *Return: always 0
**/
void print_triangle(int size)
{
int x, y;

if (size <= 0)
_putchar('\n');

for (x = 0; x < size; x++)
{
for (y = size; y >= x; y--)
{
if (x == y)
{
_putchar('\n');
}
else
{
_putchar('#');
}
}
}
}
