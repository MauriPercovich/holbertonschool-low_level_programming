#include "main.h"
#include <stdio.h>

/**
* _strchr - a function that locates a character in a string.
* @s: string
* @c: character to find
*
* Return: always 0
*/
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
return ('\0');
}
