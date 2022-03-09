#include "function_pointers.h"
/**
 * array_iterator - array iterator
 * @array: array
 * @size: size
 * @action: pointer to function
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{

for (size = 0; array[size] != '\0'; size++)
{
	action(*array[size]);
}

}
