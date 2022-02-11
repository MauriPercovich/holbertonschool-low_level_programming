#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array from n
 * @n: number of elements of the array to be printed
 * @a: string
 * Return: always 0
**/
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
printf("%d", a[x]);
if (x == n - 1)
{
break;
}
printf(", ");
}
printf("\n");
}
