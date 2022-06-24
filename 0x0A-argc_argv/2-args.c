#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: counts the number of arguments
 * @argv: array off strings
 * Return: number of arguments
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
