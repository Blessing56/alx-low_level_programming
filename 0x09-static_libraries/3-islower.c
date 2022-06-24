#include "main.h"
#include <ctype.h>

/**
 * _islower - function that checks for the lowercase character
 *
 * @c: char type letter
 *
 * Return: return 0 if successful and 1 otherwise
 */

int _islower(int c)
{
	int i = islower(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
