#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the doubly linked list
 * @n: data to insert in the list
 *
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *end_node = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (end_node != NULL)
	{
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}
		end_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	new_node->prev = end_node;
	return (new_node);
}
