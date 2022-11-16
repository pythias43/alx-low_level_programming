#include <stdio.h>
#include "3-calc.h"

/**
 * main -...
 * @argc: number of arguments
 * @argv: array containing strings of args
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);

	if (!operator)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
