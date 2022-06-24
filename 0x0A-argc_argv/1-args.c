#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: counts the number of arguments
 * @argv: array off strings
 * Return: number of arguments
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
