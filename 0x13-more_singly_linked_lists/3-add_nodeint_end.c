#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer list_t head
 * @n: int to node
 *
 * Return: 0;
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	if (!head)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	tmp = *head;

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = node;

	return (node);
}
