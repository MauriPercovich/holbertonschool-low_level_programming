#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 *@s: string
 *@accept: string
 * Return: always 0.
**/
unsigned int _strspn(char *s, char *accept)
{
unsigned int x = 0, y = 0;
unsigned int z;

while (s[x] != '\0')
{

	for (z = 0; accept[z] != '\0'; z++)
	{
	}

	while (y <= z)
	{
		if (accept[y] == s[x])
		{
			x++;
			break;
		}
		else
		{
			y++;
		}
	}


if (y == z)
{
break;
}

}
return (x);
}
