#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
  listint_t *tempNode;
  listint_t *previousNode;
  listint_t *nextNode;
  unsigned int currentNode = 0;

  tempNode = *head;
  while (tempNode != NULL)
  {
    if (index == 0 && currentNode == index)
    {
      nextNode = tempNode->next;
      *tempNode = *nextNode;
      return 1;
    }
    else if (currentNode == index)
    {
      previousNode->next = tempNode->next;
      free(tempNode);
      tempNode = NULL;
      return 1;
    }
    previousNode = tempNode;
    tempNode = tempNode->next;
    currentNode += 1;
  }

  return -1;
}
