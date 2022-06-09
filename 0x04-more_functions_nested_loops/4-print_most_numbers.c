#include "main.h"
#include <ctype.h>

/**
 * print_numbers - prints the munbers from 0 to 9 followed by a new line
 * Return: 0 always
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
