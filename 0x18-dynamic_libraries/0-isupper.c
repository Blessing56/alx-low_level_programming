#include "main.h"
#include <ctype.h>

/**
 * _isupper - function that checks for the uppercase character
 * @c: char type letter
 * Return: 1 if successful and 0 if failed
 */

int _isupper(int c)
{
	int i = isupper(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

