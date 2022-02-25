#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer
 * @b: constant
 * @n: bytes
 * Return: always 0
**/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
s[x] = (b);
x++;
}
return (s);
}
