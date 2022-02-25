#include <stdio.h>
#include <stdlib.h>
/**
 *main - print
 *@argv: other
 *@argc: number
 *Return: always 0
**/
int main(int argc, char *argv[])
{

if (argc != 3)
{
	printf("Error\n");
	return (1);
}
else
{
int x = atoi(argv[1]);
int y = atoi(argv[2]);

int result = (x * y);

	printf("%d\n", result);
}

return (0);
}
