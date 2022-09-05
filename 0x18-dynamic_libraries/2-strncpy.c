#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: points to a string
 * @src: pointe to a string
 * @n: type integer
 * Return: copies a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	strncpy(dest, src, n);

	return (dest);
}
