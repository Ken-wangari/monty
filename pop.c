#include "monty.h"
/**
 * func_pop - prints the top
 * @head: stack head
 * @counter: line_num
 * Return: no return
*/
void func_pop(t_stack **head, unsigned int counter)
{
        t_stack *h;

        if (*head == NULL)
        {
                fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
                fclose(b.file);
                free(b.con);
                f_stack(*head);
                exit(EXIT_FAILURE);
        }
        h = *head;
        *head = h->nxt;
        free(h);
}

