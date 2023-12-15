#include "monty.h"
/**
  *func_sub- sustration
  *@head: stack head
  *@counter: line_num
  *Return: no return
 */
void func_sub(t_stack **head, unsigned int counter)
{
	t_stack *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->nxt;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(b.file);
		free(b.con);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->nxt->n - aux->n;
	aux->nxt->n = sus;
	*head = aux->nxt;
	free(aux);
}
