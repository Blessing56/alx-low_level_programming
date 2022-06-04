#include <stdio.h>

/**
 * main - Exempt characters
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lt = 'a';
	while (lt <= 'z')
	{
		if (lt == 'e' || lt == 'q')
			lt++;
		putchar(lt);
		lt++;
	}
	putchar('\n');

	return (0);
}
