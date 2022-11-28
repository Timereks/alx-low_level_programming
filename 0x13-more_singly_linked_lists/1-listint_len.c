#include "lists.h"

/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *tp;
	unsigned int nr = 0;

	tp = h;
	while (tp)
	{
		nr++;
		tp = tp->next;
	}
	return (nr);
}
