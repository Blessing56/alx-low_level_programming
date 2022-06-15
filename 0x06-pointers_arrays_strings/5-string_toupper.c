#include "main.h"
#include <string.h>
#include <ctype.h>


/**
 * string_toupper - changes all lowercase of string to uppercas
 * @c: parameter or numbers
 * Return: always 0
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		c[i] = toupper(c[i]);
		i++;
	}
	return (c);
}

/**
 * int i = toupper(c);
 * if (i > 0)
 * {
 * return (*c);
 * }
 * else
 * {
 * return (0);
 * }
 * }
 */

