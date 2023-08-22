#include "lists.h"

void free_listint(listint_t *head)
{
  listint_t *tempNode;
  while (head != NULL)
  {
    tempNode = head;
    head = head->next;
    free(tempNode);
    tempNode = NULL;
  }
}

