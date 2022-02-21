#include "main.h"

/**
* _strpbrk - a function that searches a string for any of a set of bytes.
* @s: string
* @accept: string
* Return: always 0
*/
char *_strpbrk(char *s, char *accept)
{
int y;

	for (; *s != '\0'; s++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
		if (*s == accept[y])
		{
			return (s);
		}
	}	
	if (*s == *accept)
	{
		return (s);
	}
	}
return ('\0');
}
