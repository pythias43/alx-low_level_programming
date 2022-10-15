#include <stdio.h>

/**
 * main - prints the numbers from 0 to 10
 * Return: Always (Succcess)
 *
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '10'; n++)
		putchar((n % 10) + '0');


	putchar('\n');

	return (0);
}
