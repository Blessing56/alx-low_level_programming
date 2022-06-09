#include <ctype.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: char type integer
 * Return: 1 if c is a digit otherwise returns 0
 */

int _isdigit(int c)
{
	int i = isdigit(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

