#include "monty.h"
/**
 * func_push - This add node to the stack
 * @head: stack head
 * @counter: line_num
 * Return: no return
*/
void func_push(t_stack **head, unsigned int counter)
{
        int n, j = 0, flag = 0;

        if (b.arg)
        {
                if (b.arg[0] == '-')
                        j++;
                for (; b.arg[j] != '\0'; j++)
                {
                        if (b.arg[j] > 57 || b.arg[j] < 48)
                                flag = 1; }
                if (flag == 1)
                { fprintf(stderr, "L%d: usage: push integer\n", counter);
                        fclose(b.file);
                        free(b.con);
                        f_stack(*head);
                        exit(EXIT_FAILURE); }}
        else
        { fprintf(stderr, "L%d: usage: push integer\n", counter);
                fclose(b.file);
                free(b.con);
                f_stack(*head);
                exit(EXIT_FAILURE); }
        n = atoi(b.arg);
        if (b.fili == 0)
                add_node(head, n);
        else
                add_to_queue(head, n);
}

