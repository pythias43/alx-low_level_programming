#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: name to be printed
 * @f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		(*f)(name);
}
