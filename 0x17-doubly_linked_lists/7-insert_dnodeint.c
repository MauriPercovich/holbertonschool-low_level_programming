#include "lists.h"
/**
 * insert_dnodeint_at_index - main
 * @h: pointer
 * @idx: index
 * @n: data
 *
 * Return: 0
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nnode, *node = *h;
	unsigned int i = 0;

	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	if (idx == 0)
	{
		nnode->next = *h;
		nnode->prev = NULL;
		if (*h != NULL)
			(*h)->prev = nnode;
		*h = nnode;
		return (nnode);
	}
	while ((node != NULL) && (i < (idx - 1)))
	{
		node = node->next;
		i++;
	}
	if (node == NULL)
	{
		free(nnode);
		return (NULL);
	}
	nnode->next = node->next;
	nnode->prev = node;
	if (node->next != NULL)
		node->next->prev = nnode;
	node->next = nnode;
	return (nnode);
}
