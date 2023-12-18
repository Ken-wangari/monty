#include "monty.h"
/**
 * f_stack - frees a doubly linked list
 * @head: head of the stack
 */
void f_stack(t_stack *head)
{
    if (head == NULL)
        return;

    f_stack(head->nxt);
    free(head);
}

