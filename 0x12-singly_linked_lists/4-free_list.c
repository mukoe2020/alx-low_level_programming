#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees a linked list
  * @head: pointer to the list_t to be freed
  * Return: void
  */

void free_list(list_t *head)
{
	list_t *tm;

	while (head)
	{
		tm = head->next;
		free(head->str);
		free(head);
		head = tm;
	}
}
