#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create array
 *@size: size
 *@c: char
 * Return: always 0.
**/
char *create_array(unsigned int size, char c)
{
unsigned int x;
char *str;

str = malloc(sizeof(char) * size);



if (size == 0 || str == NULL)
{
	return (NULL);
}

else
{
	for (x = 0; x <= size; x++)
		str[x] = c;
	return (str);
}
return (0);
}
