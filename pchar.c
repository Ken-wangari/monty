#include "monty.h"
/**
 * func_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_num
 * Return: no return
*/
void func_pchar(t_stack **head, unsigned int counter)
{
        t_stack *h;

        h = *head;
        if (!h)
        {
                fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
                fclose(b.file);
                free(b.con);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        if (h->n > 127 || h->n < 0)
        {
                fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
                fclose(b.file);
                free(b.con);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        printf("%c\n", h->n);
}

