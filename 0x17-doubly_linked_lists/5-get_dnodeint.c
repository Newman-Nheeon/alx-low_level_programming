#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: NULL if the node does not exist or the nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int check = 0;

	while (check < index)
	{
		if (head != NULL)
		{
			head = head->next;
			check++;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
