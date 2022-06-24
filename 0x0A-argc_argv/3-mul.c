#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numers
 * @argc: counts the number of arguments
 * @argv: array off strings
 * Return: number of arguments
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
