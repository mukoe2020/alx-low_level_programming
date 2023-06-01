#include "lists.h"

/**
  * add_node - Adds node to linked list
  * @head: double pointer
  * @str: pointer to struct pointer
  * Return: the address of new element or NULL
  */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *n_list;

	n_list = malloc(sizeof(n_list));

	if (n_list == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	n_list->len = i;
	n_list->str = strdup(str);
	n_list->next = (*head);
	(*head) = n_list;

	return (*head);
}
