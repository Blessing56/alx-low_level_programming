#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to a char
 * @b: char type
 * @n: unsigned int type
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;
	unsigned int y;

	while (*(s + x) != '\0')
	{
		x++;
	}
	for (y = 0; y < n; y++)
	{
		s[y] = b;
	}
	return (s);
}
