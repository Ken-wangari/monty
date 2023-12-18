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
 * @previous: This points to the prev element
 * @nxt: Nxt points to the next element
 *
 * Description: doubly linked list of a node structure
 * Alx software engineering - python project  LIFO, FIFO project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *previous;
        struct stack_s *nxt;
} t_stack;

/**
 * struct b_s -  This are the variables
 * @arguments: value
 * @con: line con
 * @fili: note change stack
 * Description: carries values through the program
 * Alx software engineering - python project  LIFO, FIFO project
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
 * struct inst_s - opcode and its function
 * operactioncode: the opcode
 * @f: function that handles the operactioncode
 * Description: This is the operactioncode and its function
 * Alx software engineering - python project  LIFO, FIFO project
 */
typedef struct inst_s
{
        char *operactioncode;
        void (*f) (t_stack **stack, unsigned int line_num);
} instruction_t;

void func_push(t_stack **head, unsigned int num);
void func_pall(t_stack **head, unsigned int num);
void func_pint(t_stack **head, unsigned int num);
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
void f_stack(t_stack *head);
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

