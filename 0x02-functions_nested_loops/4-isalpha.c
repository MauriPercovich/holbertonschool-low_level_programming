#include "main.h"
/**
*_isalpha - return 1 if letter
*@c : int
*Return: always 0
**/

int _isalpha(int c)
{

if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))

return (1);

else

return (0);


}
