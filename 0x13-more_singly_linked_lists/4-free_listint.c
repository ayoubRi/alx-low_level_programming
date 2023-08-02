#include"lists.h"

/**
 * free_listint-to free a linked list
 * @head: listint.t list to be free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
