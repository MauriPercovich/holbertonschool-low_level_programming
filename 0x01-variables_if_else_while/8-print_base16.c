#include <stdio.h>
/**
* main - print aphabet
*
* Return: always 0
**/

int main(void)
{
char ch;
int nb;

{	
for (nb = '0'; nb <= '9'; nb++)
putchar(nb);
}
{
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
}
{
putchar ('\n');
return (0);
}
}
