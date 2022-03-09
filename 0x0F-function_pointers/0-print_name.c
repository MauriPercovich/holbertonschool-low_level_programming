#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print
 * @name: name
 * @f: pointer
 * @x: char
 * Return: always 0
**/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);

}
