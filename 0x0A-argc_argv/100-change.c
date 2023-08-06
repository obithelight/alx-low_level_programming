#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int count = 0;
	int cents;
	int money[] = {25, 10, 5, 2, 1};
	int size = sizeof(money) / sizeof(int);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i <= size; i++)
		{
			if (money[i] <= cents)
			{
				count += (cents / money[i]);
				cents %= money[i];
				if (cents == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", count);
	}
	return (0);
}
