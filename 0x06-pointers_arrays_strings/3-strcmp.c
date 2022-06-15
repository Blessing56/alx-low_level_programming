#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings
 * @s2: points to char
 * @s1: points to char
 * Return: compared string
 */

int _strcmp(char *s1, char *s2)
{
	int ret;

	ret = strcmp(s1, s2);

	if (ret < 0)
	{
		return (*s1);
	}
	else if (ret > 0)
	{
		return (*s2);
	}
	else
	{
		return (0);
	}
}
