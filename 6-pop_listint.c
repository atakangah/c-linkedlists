#include "lists.h"

int pop_listint(listint_t **head)
{
  int value;
  listint_t *tempNode;
  listint_t *nextNode;

  if (*head == NULL)
  {
    return 0;
  }

  tempNode = *head;
  value = tempNode->n;
  nextNode = tempNode->next;
  **head = *nextNode;

  return value;
}
