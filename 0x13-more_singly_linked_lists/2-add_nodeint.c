#include"lists.h"

/**
 * add_nodeint -adds new node at the beginning of a singly linked list
 * @head: pointer to the first node in the list
 * @n: what to insert in that new node
 *
 * return:pointer to new node or null if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
