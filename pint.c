#include "monty.h"
/**
 * func_pint - This function prints the top
 * @head: stack head
 * @counter: line_num
 * Return: no return
*/
void func_pint(t_stack **head, unsigned int counter)
{
        if (*head == NULL)
        {
                fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
                fclose(b.file);
                free(b.con);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }
        printf("%d\n", (*head)->n);
}

