#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: the pointer to the struct
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *delenode = *head;

	if (!head)
	{
		return (-1);
	}
	if (index == 0)
	{
		if (delenode == NULL)
		{
			return (-1);
		}
		*head = delenode->next;
		if (*head)
			(*head)->prev = NULL;
		free(delenode);
		return (1);
	}

	for (; delenode; delenode = delenode->next, index--)
	{
		if (index - 1 == 0)
		{
			tmp = delenode->next;
			if (!tmp)
			{
				break;
			}
			delenode->next = tmp->next;
			if (tmp->next)
			{
				tmp->next->prev = delenode;
			}
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
