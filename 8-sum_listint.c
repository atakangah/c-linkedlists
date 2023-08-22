#include "lists.h"

int sum_listint(listint_t *head)
{
  int total = 0;
  while (head != NULL)
  {
    total += head->n;
    head = head->next;
  }

  return total;
}
