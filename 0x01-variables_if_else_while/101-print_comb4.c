#include <stdio.h>

/**
 * main - Print combinations of two digits numbers
 * Return: Always 0 (successful)
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = 100; tens <= 999; tens++)
	{
		for (ones = tens + 1; ones <= 9; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			if (tens < 800)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
