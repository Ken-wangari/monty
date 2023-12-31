#include "monty.h"
/**
 * func_mod - This computes the rest of the division of the 2nd top element
 * @head: stack head
 * @counter: line_num
 * Return: no return
*/
void func_mod(t_stack **head, unsigned int counter)
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
                fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
                fclose(b.file);
                free(b.con);
                f_stack(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        if (h->n == 0)
        {
                fprintf(stderr, "L%d: division by zero\n", counter);
                fclose(b.file);
                free(b.con);
                f_stack(*head);
                exit(EXIT_FAILURE);
        }
        aux = h->nxt->n % h->n;
        h->nxt->n = aux;
        *head = h->nxt;
        free(h);
}

