#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings.
 * *@dest: char type
 * *@src: char type
 * Return: concatenated pointer string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
