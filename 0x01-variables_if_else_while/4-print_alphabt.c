#include <stdio.h>

/**
 * main - Point of Entry
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/* prints a - z */
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	/* print A - Z */
	while (CH <= 'Z')
	{
		putchar('\n');
		++CH;
	}

	return (0);
}
