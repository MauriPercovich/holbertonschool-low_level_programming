#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, y, suma = 0;

	for (x = 1; x < argc; x++)
	{
	for (y = 0; argv[x][y] != '\0'; y++)
	{
		if (!isdigit(argv[x][y]))
		{
			printf("Error\n");
			return (1);
		}
	}
	suma += atoi(argv[x]);
	}
	printf("%d\n", suma);
	return (0);
}
