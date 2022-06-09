#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: char type integer
 * Return: 1 if c is a digit otherwise returns 0
 */

int _isdigit(int c)
{
	c = 0;

	while (c <= 9)
	{
		_putchar(c);
		_putchar('\n');
		c++;
	}

	return (0);
}

