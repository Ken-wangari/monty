#include "monty.h"
/**
 * add_node - This function adds a node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void add_node(t_stack **head, int n)
{

        t_stack *node, *aux;

        aux = *head;
        node = malloc(sizeof(t_stack));
        if (node == NULL)
        { printf("Error\n");
                exit(0); }
        if (aux)
                aux->previous = node;
        node->n = n;
        node->nxt = *head;
        node->previous = NULL;
        *head = node;
}

