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
	int i = 0, j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = src[j];
	i++;
	j++;
	}
	return (dest);
}
