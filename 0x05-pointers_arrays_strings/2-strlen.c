#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 *@: string
 * Return: always 0
**/
int _strlen(char *s)
{
int x = 0;

for (; *s != '\0'; s++)
{
x++;
}
return (x);

}
