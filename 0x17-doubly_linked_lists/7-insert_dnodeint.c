#include "lists.h"
/**
 * insert_dnode_at_index - inserts a new node at a given posotion
 * @h: the pointer to the struct
 * @idx: index of the list where the new node should be added
 * @n: integer in the struct
 * Return: Address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
unsigned int idx, int n)
{
	dlistint_t *newnode, *current = *h, *prev;
	unsigned int index;

	if (*h == NULL && idx != 0)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	if (*h != NULL)
	{prev = NULL;
		while (current->prev != NULL)
			current = current->prev;
		for (index = 0; current != NULL && index < idx; index++)
		{prev = current;
			current = current->next;
		}
		if (index == idx)
		{newnode->n = n;
			newnode->prev = prev;
			if (current != NULL)
				current->prev = newnode;
			newnode->next = current;
			if (idx == 0)
			{*h = newnode;
			}
			else
			{prev->next = newnode;
			}
			return (newnode);
		}
		return (NULL);
	}
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;
	*h = newnode;
	return (newnode);
}
