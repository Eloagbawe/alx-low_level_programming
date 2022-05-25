#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to first node
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *current_node, *next_node;

	current_node = head;

	while (current_node->next != NULL)
	{
		next_node = current_node->next;
		free(current_node->str);
		free(current_node);
		current_node = next_node;
	}
	free(current_node->str);
	free(current_node);
}
