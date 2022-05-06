#include "lists.h"
/**
 * add_dnodeint_end - adds
 * @head: pointer
 * @n: number
 *
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nnode, *nend;

	nend = *head;
	nnode = malloc(sizeof(dlistint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	if (*head == NULL)
	{
		nnode->next = NULL;
		nnode->prev = NULL;
		*head = nnode;
		return (nnode);
	}
	while (nend->next != NULL)
	{
		nend = nend->next;
	}
	nnode->next = NULL;
	nnode->prev = nend;
	nend->next = nnode;
	return (nnode);
}
