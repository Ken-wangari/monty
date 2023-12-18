#include "monty.h"
/**
 * func_add - This adds the top two elements 
 * @head: stack head
 * @counter: line_num
 * Return: no return
*/
void func_add(t_stack **head, unsigned int counter)
{
        t_stack *h;
        int len = 0, aux;

        h = *head;
        while (h)
        {
                h = h->nxt;
                len++;
        }
        if (len < 2)
        {
                fprintf(stderr, "L%d: can't add, stack too short\n", counter);
                fclose(b.file);
                free(b.con);
                f_stack(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        aux = h->n + h->nxt->n;
        h->nxt->n = aux;
        *head = h->nxt;
        free(h);
}

