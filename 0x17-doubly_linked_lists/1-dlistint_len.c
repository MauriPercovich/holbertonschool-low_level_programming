#include "lists.h"
/**
 * dlistint_len - main
 * @h: points
 *
 * Return: n of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *actual = h;
	size_t n = 0;

	while (actual != NULL)
	{
		n++;
		actual = actual->next;
	}
	return (n);
}
