#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - print strings.
 * @separator: separator of numbers.
 * @n: n
**/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list x;
unsigned int i;
char *str;

va_start(x, n);

for (i = 0; i < n; i++)
{
	str = (va_arg(x, *char));
	if (str != NULL)
	{
		printf("%s", str);
	}
	else
	{
		printf("(nil)");
	}

	if ((i != (n - 1)) && separator != NULL)
		printf("%s", separator);
}
printf("\n");

va_end(x);
}
