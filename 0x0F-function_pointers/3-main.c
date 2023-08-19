#include "3-calc.h"

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*myFunc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (-1);
	}
	myFunc = get_op_func(argv[2]);

	if (!myFunc)
	{
		printf("Error\n");
		return (-1);
	}
	printf("%d\n", myFunc(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
