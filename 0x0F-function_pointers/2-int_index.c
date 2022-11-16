#include "function_pointers.h"

/**
 * int_index - searches for int
 * @array: array to run search on
 * @size: size of array
 * @cmp: Function pointer
 * Return: the first element of array or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
