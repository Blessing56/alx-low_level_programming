#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: char type
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
