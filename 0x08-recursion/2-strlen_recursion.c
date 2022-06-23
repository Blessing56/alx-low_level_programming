#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer
 * Return: always 0
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

