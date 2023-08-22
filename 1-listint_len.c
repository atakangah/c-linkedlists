#include "lists.h"

size_t listint_len(const listint_t *h)
{
  int total = 0;
  while (h != NULL)
  {
    h = h->next;
    total += 1;
  }
  return total;
}
