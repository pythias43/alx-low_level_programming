#include "main.h"

/**
 * main - the starting point
 * @argc: argument counter
 * @argv: array pointer to string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print("%s\n", argv[i]);
	}
	return (0);
}
