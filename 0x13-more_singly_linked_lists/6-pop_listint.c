#include "lists.h"

/**
 * pop_listint - Deletes the head node .
 * @head: A pointer.
 *
 * Return: If the linked list is empty - 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
