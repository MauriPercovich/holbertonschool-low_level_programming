#include "function_pointers.h"
/**
 * array_iterator - array iterator
 * @array: array
 * @size: size
 * @action: pointer to function
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;

if (array == NULL || action == 0)
{
return;
}

for (x = 0; x < size; x++)
{
	action(*array);
	array++;
}

}
