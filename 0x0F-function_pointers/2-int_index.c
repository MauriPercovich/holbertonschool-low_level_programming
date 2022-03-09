#include "function_pointers.h"
/**
 * int_index - array iterator
 * @array: array
 * @size: size
 * @cmp: pointer to function
**/
int int_index(int *array, int size, int (*cmp)(int))
{
int x;

if (size <= 0)
{
	return (-1);
}

for (x = 0; x < size; x++)
{
	if (cmp(array[x]) == 1)
	{
		return(x);
	}
	
}

return (x);
}
