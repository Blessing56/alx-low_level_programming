#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 * @n: type int
 * Return: concatenated pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	n = 1;

	strncat(dest, src, n);

	return (dest);
}
