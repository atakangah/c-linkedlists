#include "lists.h"

size_t print_listint(const listint_t *h)
{
  int total = 0;
  while (h != NULL)
  {
    printf("%d\n", h->n);
    h = h->next;
    total += 1;
  }

  return total;
}
