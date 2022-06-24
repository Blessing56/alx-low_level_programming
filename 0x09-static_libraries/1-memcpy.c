#include "main.h"
#include <string.h>

/**
 * _memcpy - copy memory area
 * @dest: memory to be copied to
 * @src: memory to be copied from
 * @n: number of bytes
 * Return: points to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
