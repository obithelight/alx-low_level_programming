#include "3-calc.h"

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, or exits with a relevant error code
 */
int main(int argc, char **argv)
{
	int a, b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Usage: %s <num1> <operator> <num2>\n", argv[0]);
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error: Operator not recognized\n");
		exit(99);
	}

	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && b == 0)
	{
		printf("Error: Division by zero\n");
		exit(100);
	}

	printf("%d\n", operation(a, b));

	return (0);
}
