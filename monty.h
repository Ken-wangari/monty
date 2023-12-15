#ifndef MONTY_H
#define MONTY_H
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

/**
 * struct stack_s - The doubly linked list rep of a stack
 * @n: integer
 * @previous: This points to the prev element of the stack or the queue
 * @nxt: Nxt points to the next element of the stack or the queue
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Alx software engineering - python project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *previous;
        struct stack_s *nxt;
} t_stack;

/**
 * struct b_s - The variables
 * @arguments: value
 * @con: line con
 * @fili: note change stack
 */
typedef struct b_s
{
        char *arg;
        FILE *file;
        char *con;
        int fili;
} bus_t;
extern bus_t b;
/**
 * struct instruction_s - opcode and its function
 * operactioncode: the opcode
 * @f: function to handle the opcode
 * Description: the opcode and its function
 * for stack, queues, LIFO, FIFO Alx software engineering - python project
 */
typedef struct instruction_s
{
        char *operactioncode;
        void (*f) (t_stack **stack, unsigned int line_num);
} instruction_t;

void func_push(t_stack **head, unsigned int number);
void func_pall(t_stack **head, unsigned int number);
void func_pint(t_stack **head, unsigned int number);
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *con);
int exc(char *con, t_stack **head, unsigned int counter, FILE *file);
void func_div(t_stack **head, unsigned int counter);
void func_mul(t_stack **head, unsigned int counter);
void func_mod(t_stack **head, unsigned int counter);
void func_pchar(t_stack **head, unsigned int counter);
void func_pstr(t_stack **head, unsigned int counter);
void func_rotl(t_stack **head, unsigned int counter);
void func_rotr(t_stack **head, __attribute__((unused)) unsigned int counter);
void free_stack(t_stack *head);
void func_pop(t_stack **head, unsigned int counter);
void func_swap(t_stack **head, unsigned int counter);
void func_add(t_stack **head, unsigned int counter);
void func_nop(t_stack **head, unsigned int counter);
void func_sub(t_stack **head, unsigned int counter);
void func_queue(t_stack **head, unsigned int counter);
void func_stack(t_stack **head, unsigned int counter);
void add_node(t_stack **head, int n);
void add_to_queue(t_stack **head, int n);
#endif

