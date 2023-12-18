#define  _POSIX_C_SOURCE 200809L

#include "monty.h"
bus_t b = {NULL, NULL, NULL, 0};
/**
* main - This is the monty code interpreter
* @argc: num of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *con;
	FILE *file;
	ssize_t r_line = 1;
	size_t size = 0;
	t_stack *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	b.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (r_line > 0)
	{
		con = NULL;
		r_line = getline(&con, &size, file);
		b.con = con;
		counter++;
		if (r_line > 0)
		{
			exc(con, &stack, counter, file);
		}
		free(con);
	}
	f_stack(stack);
	fclose(file);
return (0);
}
