#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first_node, *rev_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	rev_node = NULL;

	while ((*head)->next != NULL)
	{
		first_node = (*head)->next;
		(*head)->next = rev_node;
		rev_node = *head;
		*head = first_node;
	}

	(*head)->next = rev_node;

	return (*head);
}
