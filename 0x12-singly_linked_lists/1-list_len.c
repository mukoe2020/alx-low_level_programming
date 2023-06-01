#include "lists.h"

/**
  * list_len - Entry point
  * Description - 'prints out the elements in a linked list'
  * @h: pointer to linked list
  * Return: number of elements in h
  */

size_t list_len(const list_t *h)
{
	size_t elmnts = 0;

	while (h)
	{
		elmnts++;
		h = h->next;
	}

	return (elmnts);
}
