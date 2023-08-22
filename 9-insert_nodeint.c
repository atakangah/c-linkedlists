#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  listint_t *tempNode;
  listint_t *previousNode;
  listint_t *newNode;
  unsigned int currentNode = 0;

  newNode = malloc(sizeof(listint_t));
  if (newNode == NULL) {
    return NULL;
  }
  newNode->n = n;

  tempNode = *head;
  while (tempNode != NULL)
  {
    if (currentNode == idx)
    {
      newNode->next = previousNode->next;
      previousNode->next = newNode;
      return newNode;
    }
    previousNode = tempNode;
    tempNode = tempNode->next;
    currentNode += 1;
  }

  return NULL;
}
