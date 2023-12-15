#include "monty.h"
/**
  *func_rotr- This function rotates the stack to the bottom
  *@head: stack head
  *@counter: line_num
  *Return: no return
 */
void func_rotr(t_stack **head, __attribute__((unused)) unsigned int counter)
{
        t_stack *copy;

        copy = *head;
        if (*head == NULL || (*head)->nxt == NULL)
        {
                return;
        }
        while (copy->nxt)
        {
                copy = copy->nxt;
        }
        copy->nxt = *head;
        copy->previous->nxt = NULL;
        copy->previous = NULL;
        (*head)->previous = copy;
        (*head) = copy;
}

