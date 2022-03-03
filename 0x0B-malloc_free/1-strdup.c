#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
  char *array;
  int i = 0;
  int j = 0;
  int size = 0;

  if (s1 == NULL)
    s1 = "";
  if (s2 == NULL)
    s2 = "";

  while (s1[i] != '\0')
    i++;
  while (s2[j] != '\0')
    j++;

  size = i + j + 1;

  array = malloc(size * sizeof(char));

  if (array == NULL)
    return (NULL);

  for (i = 0; s1[i] != '\0'; i++)
    array[i] = s1[i];

  for (j = 0; s2[j] != '\0'; j++)
    array[i + j] = s2[j];

  return (array);
}
