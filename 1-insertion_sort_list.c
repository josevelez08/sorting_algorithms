#include <stdio.h>
#include "sort.h"
#include <stdbool.h>
/**
 *  sortlist - two wiles, the first aks until the first position is right,
 * The second while is check if the n most little is forward
 * @list: double linked list
 */
void sortlist(listint_t **list)
{
	listint_t *current = *list;

	while ((current) != NULL)
	{
		listint_t *prevNode = (current)->prev;

		if (prevNode == NULL)
		{ current = (current)->next;
			continue; }
		if (prevNode->prev == NULL && (prevNode)->n > (current)->n)
		{
			current->next->prev = (*list);
			(*list)->prev = current;
			current->prev = NULL;
			(*list)->next = current->next;
			current->next = (*list);
			(*list) = current;
			break; }
		if ((current)->next == NULL && current->n < prevNode->n)
		{
			current->next = current->prev;
			current->prev = prevNode->prev;
			prevNode->prev->next = prevNode->next;
			prevNode->prev = prevNode->next;
			prevNode->next = NULL;
			break;
		}
		if ((prevNode)->n > (current)->n)
		{
			current->next->prev = current->prev;
			prevNode->prev->next = prevNode->next;
			current->prev = prevNode->prev;
			prevNode->prev = prevNode->next;
			prevNode->next = current->next;
			current->next = prevNode;
			break;
		}
		current = (current)->next;
	}
}
/**
 *  insertion_sort_list - the code insertion sort algorithm, the little forward
 * @list: double linked list
 */
void insertion_sort_list(listint_t **list)
{
	int i = 0;

	while ((*list)->n != 7)
	{
		sortlist(list);
		print_list(*list);
		i++;
	}
}
