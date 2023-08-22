#include "lists.h"

void free_listint2(listint_t **head)
{
  listint_t *tempNode;
  while (head != NULL && *head != NULL)
  {
    tempNode = *head;
    *head = tempNode->next;
    free(tempNode);
  }
}
