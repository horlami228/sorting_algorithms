#include "sort.h"

listint_t *create_listint(const int *array, size_t size)
{
	listint_t *node;
	listint_t *list;
	int *temp;
	
	list = NULL;

	for (int i = size - 1; i >= 0; i--)
	{
		node = malloc(sizeof(*node));
			if (node == NULL)
			{
				return NULL;
			}
		
		node->next = list;
		node->prev = NULL;
		temp = (int *)&node->n;
		*temp = array[i];

		list = node;

		if (list->next != NULL)
		{
			list->next->prev = list;
		}

	}

	return (list);
}