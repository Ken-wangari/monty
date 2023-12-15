#include "monty.h"
/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 */
void free_stack(t_stack *head)
{
    if (head == NULL)
        return;

    free_stack(head->nxt);
    free(head);
}

