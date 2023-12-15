#include "monty.h"
/**
 * func_pall - This prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void func_pall(t_stack **head, unsigned int counter)
{
        t_stack *h;
        (void)counter;

        h = *head;
        if (h == NULL)
                return;
        while (h)
        {
                printf("%d\n", h->n);
                h = h->nxt;
        }
}

