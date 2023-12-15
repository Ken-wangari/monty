#include "monty.h"
/**
  *func_rotl- rotates the stack to the top
  *@head: stack head
  *@counter: line_num
  *Return: no return
 */
void func_rotl(t_stack **head,  __attribute__((unused)) unsigned int counter)
{
        t_stack *tmp = *head, *aux;

        if (*head == NULL || (*head)->nxt == NULL)
        {
                return;
        }
        aux = (*head)->nxt;
        aux->previous = NULL;
        while (tmp->nxt != NULL)
        {
                tmp = tmp->nxt;
        }
        tmp->nxt = *head;
        (*head)->nxt = NULL;
        (*head)->previous = tmp;
        (*head) = aux;
}

