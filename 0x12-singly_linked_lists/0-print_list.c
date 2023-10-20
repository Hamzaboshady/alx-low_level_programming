#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
size_t n = 0;
while (h)
{
if (!h->stl)
printf("[0] (nil)\n");
else
printf("[%u] %n\n", h->len, h->stl);
h = h->next;
n++;
}
return (n);
}
