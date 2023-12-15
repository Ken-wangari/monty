#include "monty.h"
/**
 * add_node - This add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void add_node(t_stack **head, int n)
{

        t_stack *n_node, *aux;

        aux = *head;
        n_node = malloc(sizeof(t_stack));
        if (n_node == NULL)
        { printf("Error\n");
                exit(0); }
        if (aux)
                aux->previous = n_node;
        n_node->n = n;
        n_node->nxt = *head;
        n_node->previous = NULL;
        *head = n_node;
}

