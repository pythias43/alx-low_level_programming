#include "main.h"

/**
 * _isupper - checks for the uppercase character
 * @c: variable text
 * Return: always 0
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
