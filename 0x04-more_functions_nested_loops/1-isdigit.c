#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: char type integer
 * Return: 1 if c is a digit otherwise returns 0
 */

int _isdigit(int c)
{
	int digit = 0;

	while (digit <= 9)
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');

	return (0);
}

