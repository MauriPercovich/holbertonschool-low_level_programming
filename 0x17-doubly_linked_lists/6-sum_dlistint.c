#include "lists.h"
/**
 * sum_dlistint -  sum
 * @head: pointer
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *remp = head;
	int sum = 0;

	while (remp != NULL)
	{
		sum += remp->n;
		remp = remp->next;
	}
	return (sum);
}
