#include "monty.h"
/**
* exc - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @con: line content
* Return: no return
*/
int exc(char *con, t_stack **stack, unsigned int counter, FILE *file)
{
        instruction_t opst[] = {
                                {"push", func_push}, {"pall", func_pall}, {"pint", func_pint},
                                {"pop", func_pop},
                                {"swap", func_swap},
                                {"add", func_add},
                                {"nop", func_nop},
                                {"sub", func_sub},
                                {"div", func_div},
                                {"mul", func_mul},
                                {"mod", func_mod},
                                {"pchar", func_pchar},
                                {"pstr", func_pstr},
                                {"rotl", func_rotl},
                                {"rotr", func_rotr},
                                {"queue", func_queue},
                                {"stack", func_stack},
                                {NULL, NULL}
                                };
        unsigned int i = 0;
        char *op;

         op = strtok(con, " \n\t");
        if (op && op[0] == '#')
                return (0);
        b.arg = strtok(NULL, " \n\t");
        while (opst[i].operactioncode && op)
        {
                if (strcmp(op, opst[i].operactioncode) == 0)
                {       opst[i].f(stack, counter);
                         return (0);
                }
                i++;
        }
        if (op && opst[i].operactioncode == NULL)
        { fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
                fclose(file);
                free(con);
                free_stack(*stack);
                exit(EXIT_FAILURE); }
        return (1);
}

