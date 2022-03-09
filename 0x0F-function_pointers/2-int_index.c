#include "function_pointers.h"
/**
 * int_index - array iterator
 * @array: array
 * @size: size
 * @cmp: pointer to function
 * Return: always 0
**/
int int_index(int *array, int size, int (*cmp)(int))
{
int x;

if (array == NULL || cmp == NULL)
{
	return (-1);
}
if (size <= 0)
{
	return (-1);
}

for (x = 0; x < size; x++)
{
	if ((cmp)(array[x]) != 0)
	{
		return (x);
	}

}

return (-1);
}
