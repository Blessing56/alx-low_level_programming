#include <stdio.h>

/**
 * main - Print combinations of two 2-digits numbers
 * Return: Always 0 (successful)
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
	{
		for (b = 0; b < 100; b++)
		{
			if (b > a)
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
				putchar(' ');
				putchar(b / 10 + '0');
				putchar(b % 10 + '0');
				if (a * 100 + b != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
