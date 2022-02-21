#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 *@s: string
 *@c: character to find
 *
 * Return: always 0.
**/
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return '\0';
}
