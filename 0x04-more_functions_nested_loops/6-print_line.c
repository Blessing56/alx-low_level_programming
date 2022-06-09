#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: char type
 */

void print_line(int n)
{
	int i = 0;

	while (n < 0)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		i++;
	}
	_putchar('\n');
}
