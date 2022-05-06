#include "lists.h"
/**
 * get_dnodeint_at_index - main
 * @head: pointer
 * @index: index
 *
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nnode = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (nnode != NULL && i < index)
	{
		nnode = nnode->next;
		i++;
	}
	if (nnode == NULL)
		return (NULL);
	return (nnode);
}
