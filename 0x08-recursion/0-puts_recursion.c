#include "main.h"
#include <stdio.h>


/**
 * _puts_recursion - prints a string followed ya new line
 * @s: points to a char type
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

