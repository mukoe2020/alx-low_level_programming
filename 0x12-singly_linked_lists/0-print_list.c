#include <stdio.h>
#include "lists.h"

/**
  * print_list - Entry point
  * Description - 'prints all elements of a linked list'
  * @h: pointer to the linked list
  * Return: number of nodes
  */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
