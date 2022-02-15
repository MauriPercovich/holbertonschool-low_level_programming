#include "main.h"
/**
 * _strcmp -  a function that compares two strings.
 *
 * Return: always 0
**/
int _strcmp(char *s1, char *s2)
{
int x;

for (x = 0; s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x]; x++)
{
	s1++;
	s2++;
}

return (*s1 - *s2);
}
