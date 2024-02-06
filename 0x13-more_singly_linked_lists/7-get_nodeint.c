#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 * @head: A pointer 
 * @index: The index of the node to
 * @Return: the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
