#include "main.h"
/**
 * _strcmp -  a function that compares two strings.
 *@s1: string 1
 *@s2: string 2
 * Return: always 0
**/
int _strcmp(char *s1, char *s2)
{
int x;

for (x = 0; *s1 != '\0' && *s2 != '\0' && *s1 == *s2; x++)
{
	s1++;
	s2++;
}

return (*s1 - *s2);
}
