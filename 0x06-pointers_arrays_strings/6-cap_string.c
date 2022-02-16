#include "main.h"
/**
 * cap_string - changes all lowercase letters of a string to uppercase.
 *@y: string
 * Return: always 0
**/
char *cap_string(char *y)
{
int x;

for (x = 0; y[x] != '\0'; x++)
{
	if (y[x] >= 'a' && y[x] <= 'z')
	{

	if (y[x - 1] == ' ' ||
	y[x - 1] == '\t' ||
	y[x - 1] == '\n' ||
	y[x - 1] == ',' ||
	y[x - 1] == ';' ||
	y[x - 1] == '.' ||
	y[x - 1] == '!' ||
	y[x - 1] == '?' ||
	y[x - 1] == '"' ||
	y[x - 1] == '(' ||
	y[x - 1] == ')' ||
	y[x - 1] == '{' ||
	y[x - 1] == '}' ||
	x == 0)


	y[x] = y[x] - 32;
	}

}
return (y);
}
