#include "main.h"

/**
 * print_line - print n lines or new line
 * @n: checks for n
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
