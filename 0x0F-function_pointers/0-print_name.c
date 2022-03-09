#include "function_pointers.h"
/**
 * print_name - print
 * @name: name
 * @f: pointer
 * @x: char
 * Return: always 0
**/
void print_name(char *name, void (*f)(char *))
{

f(name);

}
