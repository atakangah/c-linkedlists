#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *newNode;
  listint_t *tempNode;

  newNode = malloc(sizeof(listint_t));
  if (newNode == NULL)
  {
    return NULL;
  }
  newNode->n = n;
  newNode->next = NULL;

  tempNode = *head;
  if (tempNode == NULL)
  {
    *head = malloc(sizeof(listint_t));
    **head = *newNode;
  }
  else
  {
    while (tempNode->next != NULL)
    {
      tempNode = tempNode->next;
    }
    tempNode->next = newNode;
  }

  return newNode;
}
