#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 *@src: source
 *@dest: destination
 *@n: bytes
 * Return: always 0.
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
