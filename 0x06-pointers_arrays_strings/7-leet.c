#include "main.h"
/**
 * leet - 1337
 * @z: string
 * Return: always 0
**/
char *leet(char *z)
{
char x[] = "4433007711";
char y[] = "aAeEoOtTlL";
int a, b;

	for (a = 0; z[a] != '\0'; a++)
	{
	for (b = 0; b < 9; b++)
	{
		if (z[a] == y[b])
			z[a] = x[b];
	}
	}


return (z);

}
