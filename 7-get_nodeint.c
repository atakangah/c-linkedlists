#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
  unsigned int currentNode = 0;
  while (head != NULL)
  {
    if (currentNode == index) {
      return head;
    }

    head = head->next;
    currentNode += 1;
  }

  return NULL;
}
