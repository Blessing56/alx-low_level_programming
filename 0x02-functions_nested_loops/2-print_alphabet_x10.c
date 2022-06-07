#include "main.h"
#include <stdbool.h>

/**
 * print_alphabet_x10 - function that prints lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int a = 0, b;

	while (a < 10)
	{
		b = 97;
		while (b <= 122)
		{
			_putchar(b);

			b++;
		}
		_putchar('\n');
		a++;
	}
}
