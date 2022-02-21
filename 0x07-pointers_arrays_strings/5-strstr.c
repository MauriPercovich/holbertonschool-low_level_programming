#include "main.h"
/**
 * _strstr - a function that locates a substring
 *@haystack: string
 *@needle: string
 * Return: always 0.
**/
char *_strstr(char *haystack, char *needle)
{
int y;

for (; *haystack != '\0'; haystack++)
{
	for (y = 0; needle[y] != '\0'; y++)
	{
		if (*haystack == needle[y])
		{
			return (haystack[y]);
		}
	}
if (*haystack == needle[y])
{
	return (haystack[y]);
}
}
return ('\0');


}
