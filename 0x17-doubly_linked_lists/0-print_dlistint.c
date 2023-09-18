#include "lists.h"

/**
<<<<<<< HEAD
 * print_dlistint - function
 * @h: variable
 * dlistint: list
 * Return: number of nodes
 */

=======
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
>>>>>>> e6e8dff68348361d20300827c6cab6d7a7301dd6
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
<<<<<<< HEAD
		return(count);
=======
		return (count);
>>>>>>> e6e8dff68348361d20300827c6cab6d7a7301dd6

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
