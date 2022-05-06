#include "lists.h"
/**
 * print_dlistint - prints
 * @h: points
 *
 * Return: n of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *actual;
	size_t n = 0;

	actual = h;
	while (actual != NULL)
	{
		printf("%d\n", actual->n);
		n++;
		actual = actual->next;
	}
	return (n);
}
