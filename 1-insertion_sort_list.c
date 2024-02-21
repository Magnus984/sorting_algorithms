#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the insertion algorithm
 * @list: head node of doubly linked list
 *
 * Return: no return value
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *tmp2;

	current = *list;
	while (current->next != NULL)
	{
		if (current->n > current->next->n)
		{
			tmp = current->next;
			current->next = tmp->next;
			tmp->prev = current->prev;
			current->prev = tmp;
			tmp->next = current;
			if (current->next != NULL)
				current->next->prev = current;
			tmp->prev->next = tmp;
			print_list(*list);
			while (tmp->prev != NULL && tmp->prev->n > tmp->n)
			{
				tmp2 = tmp->prev;
				tmp2->next = tmp->next;
				tmp->prev = tmp2->prev;
				tmp2->prev = tmp;
				tmp->next = tmp2;
				tmp2->next->prev = tmp2;
				if (tmp->prev == NULL)
				{
					*list = tmp;
					print_list(*list);
				}
				else
				{
					tmp->prev->next = tmp;
					print_list(*list);
				}
			}
		}
		else
			current = current->next;
	}
}
