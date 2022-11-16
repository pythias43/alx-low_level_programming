#include "function_pointers.h"

/**
 * array_iterator - execute a function given as param
 * @array: array to execute function on
 * @size: size of array
 * @action: pointer to array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
