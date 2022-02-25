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
int z = 0;

while (s[x] != ' ')
{
	for (y = 0; accept[y] != '\0'; y++)
	{
		if (s[x] == accept[y])
		{
		z++;
		break;
		}
	}
	x++;
}

return (z);

}
