#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t j;

	for (j = 0; h != NULL; j++)
		h = h->next;
	return (i);
}
