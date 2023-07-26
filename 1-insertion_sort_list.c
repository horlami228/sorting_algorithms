#include "sort.h"
/**
 * insertion_sort_list - Insertion algoritm for doubly linked list
 * @list: head pointer to the linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted = (*list)->next;

	while (sorted)
	{
		while (sorted->prev && sorted->n < sorted->prev->n)
		{
			/*
			*detach the node from the list and make the space empty
			*for a right shift of its previous node
			*/

			sorted->prev->next = sorted->next;
			
			/*
			*Make sure the node is not pointing to NULL
			*/
			if (sorted->next != NULL)
			{
				sorted->next->prev = sorted->prev;
				
			}
			/*
			* insert the key node to the right position in list
			*/
			sorted->next = sorted->prev;
			sorted->prev = sorted->prev->prev;
			sorted->next->prev = sorted;
			if (sorted->prev != NULL)
			{
				sorted->prev->next = sorted;
				print_list(*list);
			}
			/*
			*check if the node was is first now
			*/
			if (sorted->prev == NULL)
			{
				*list = sorted;
				print_list(*list);
			}
		}
		
		sorted = sorted->next;
	}
}
