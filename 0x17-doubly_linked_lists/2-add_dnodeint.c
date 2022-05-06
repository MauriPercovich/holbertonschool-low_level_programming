#include "lists.h"
/**
 * add_dnodeint - adds a node
 * @head: pointer
 * @n: int
 *
 * Return: 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
		return (node);
	}
	(*head)->prev = node;
	node->next = *head;
	node->prev = NULL;
	*head = node;
	return (node);
}
