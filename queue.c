#include "monty.h"
/**
 * func_queue - prints the top
 * @head: stack head
 * @counter: line_num
 * Return: no return
*/
void func_queue(t_stack **head, unsigned int counter)
{
        (void)head;
        (void)counter;
        b.fili = 1;
}

/**
 * add_to_queue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void add_to_queue(t_stack **head, int n)
{
        t_stack *new_node, *aux;

        aux = *head;
        new_node = malloc(sizeof(t_stack));
        if (new_node == NULL)
        {
                printf("Error\n");
        }
        new_node->n = n;
        new_node->nxt = NULL;
        if (aux)
         {
                while (aux->nxt)
                        aux = aux->nxt;
        }
        if (!aux)
        {
                *head = new_node;
                new_node->previous = NULL;
        }
        else
        {
                aux->nxt = new_node;
                new_node->previous = aux;
        }
}

