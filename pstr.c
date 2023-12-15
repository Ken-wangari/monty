#include "monty.h"
/**
 * func_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_num
 * Return: no return
*/
void func_pstr(t_stack **head, unsigned int counter)
{
        t_stack *h;
        (void)counter;

        h = *head;
        while (h)
        {
                if (h->n > 127 || h->n <= 0)
                {
                        break;
                }
                printf("%c", h->n);
                h = h->nxt;
        }
        printf("\n");
}

