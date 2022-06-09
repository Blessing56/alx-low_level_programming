#include "main.h"
#include <ctype.h>

/**
 * print_numbers - prints the munbers from 0 to 9 followed by a new line
 * Return: 0 always
 */

void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i);
		++i;
	}
	_putchar('\n');
}
