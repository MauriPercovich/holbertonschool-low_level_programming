#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes
 * @head: pointer
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nnode;
	unsigned int i = 0;

	nnode = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (nnode->next != NULL)
			nnode->next->prev = NULL;
		*head = (*head)->next;
		free(nnode);
		return (1);
	}
	while (nnode != NULL && i < index)
	{
		nnode = nnode->next;
		i++;
	}
	if (nnode == NULL)
		return (-1);
	nnode->prev->next = nnode->next;
	if (nnode->next != NULL)
		nnode->next->prev = nnode->prev;
	free(nnode);
	return (1);
}
