#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sums up all int arg params
 * @n: num of args
 * Return: The sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	if (n != 0)
	{
		unsigned int;
		unsigned int sum = 0;

	for (i = 0; i < n; i++)
	{
	sum += va_arg(ap, int);
	}
va_end(ap);
return (sum);
	}
	return (0);
}
