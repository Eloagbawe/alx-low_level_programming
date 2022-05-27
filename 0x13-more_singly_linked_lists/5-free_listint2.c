#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint2 - frees a list
 * @head: pointervto head
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if (*head == NULL)
	{
		return;
	}
	current_node = *head;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = NULL;
}
