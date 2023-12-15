#include "monty.h"
/**
 * func_div - This function divides the top two elements
 * @head: the stack head
 * @counter: line_num
 * Return: no return
*/
void func_div(t_stack **head, unsigned int counter)
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
                fprintf(stderr, "L%d: can't div, stack too short\n", counter);
                fclose(b.file);
                free(b.con);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        if (h->n == 0)
        {
                fprintf(stderr, "L%d: division by zero\n", counter);
                fclose(b.file);
                free(b.con);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
         aux = h->nxt->n / h->n;
        h->nxt->n = aux;
        *head = h->nxt;
        free(h);
}

