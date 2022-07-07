#include "lists.h"
/**
 * sum_dlistint - sum of all data of a list
 * @head: head of the list
 *
 * Return: the sum of all data in a list
 */
int sum_dlistint(dlistint_t *head)
{
	int addition = 0;

	while (head != NULL)
	{
		addition = addition + head->n;
		head = head->next;

	}
	return (addition);
}
