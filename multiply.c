#include "monty.h"
/**
 * func_mul - This function multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_num
 * Return: no return
*/
void func_mul(t_stack **head, unsigned int counter)
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
                fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
                fclose(b.file);
                free(b.con);
                f_stack(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        aux = h->nxt->n * h->n;
        h->nxt->n = aux;
        *head = h->nxt;
        free(h);
}

