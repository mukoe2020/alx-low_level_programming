#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
  * add_node_end - adds new node at the end of list_t
  * @head: double pointer
  * @str: string to put in new node
  * Return: the address of the new element, or NULL if it failed
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_list;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n_list = malloc(sizeof(list_t));

	if (!n_list)
		return (NULL);

	n_list->str = strdup(str);
	n_list->len = len;
	n_list->next = NULL;

	if (*head == NULL)
	{
		*head = n_list;
		return (n_list);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = n_list;

	return (n_list);
}
