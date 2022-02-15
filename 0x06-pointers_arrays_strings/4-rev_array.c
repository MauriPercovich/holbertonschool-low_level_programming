#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers
 * @a: array of ints
 * @n: number of elems of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--) /* n-- probar */
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
