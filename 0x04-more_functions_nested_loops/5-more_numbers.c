#include "main.h"

/**
 * more_numbers - print 10 times the number 0 to 14 followed by a newline
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
	}
}
