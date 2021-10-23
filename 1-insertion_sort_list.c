#include "sort.h"

/**
 * compare_two - compares two nodes
 * @node1: greater node
 * @node2: smaller node
 * Return: 1 if true, 0 if false
 */
int compare_two(listint_t *node1, listint_t *node2)
{
	if (!node1 || !node2)
		return (0);
	if (node1->n > node2->n)
		return (1);
	return (0);
}

/**
 * swap_nodes - swap places of nodes
 * @node1: first node
 * @node2: second node
 * Return: nothing
 */

void swap_nodes(listint_t *node1, listint_t *node2)
{
	listint_t *ba_1, *ba_2, *ne_1, *ne_2;

	if (!node1 || !node2)
		return;
	ba_1 = node1->prev;
	ba_2 = node2->prev;
	ne_1 = node1->next;
	ne_2 = node2->next;
	if (ne_1 == node2)
		ne_1 = node1;
	else if (ne_2 == node1)
		ne_2 = node2;
	node1->next = ne_2;
	node2->next = ne_1;
	node1->prev = ba_2;
	node2->prev = ba_1;
	if (node1->next)
		(node1->next)->prev = node1;
	if (node2->next)
		(node2->next)->prev = node2;
	if (node1->prev)
		(node1->prev)->next = node1;
	if (node2->prev)
		(node2->prev)->next = node2;
}

/**
 * insertion_sort_list - insertion sort
 * @list: head of list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *cmp;

	if (!list)
		return;
	ptr = *list;
	cmp = ptr->next;
	print_list(ptr);
	swap_nodes(cmp, cmp->next->next);
	print_list(ptr);
	swap_nodes(cmp->next, cmp);
	print_list(ptr);
}
