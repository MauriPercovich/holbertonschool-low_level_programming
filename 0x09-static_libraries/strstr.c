#include "main.h"
#include <stdio.h>

/**
* _strstr - locates a substring.
* @haystack: the address of memory to print
* @needle: the size of the memory to print
*
* Return: Nothing.
*/
char *_strstr(char *haystack, char *needle)
{
	int y;

	for (; *haystack != '\0'; haystack++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (*haystack == needle[y])
			{
				return (haystack);
			}
		}
		if (*haystack == *needle)
		{
			return (haystack);
		}
	}
	return ('\0');
}
