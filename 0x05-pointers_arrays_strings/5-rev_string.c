#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: char type
 */

void rev_string(char *s)
{
	int i = 0;


	while (s[i])
	i++;

	while (i--)
	{
		_putchar(s[i]);
	}
}
