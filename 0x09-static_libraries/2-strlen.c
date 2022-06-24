#include "main.h"
#include<string.h>


/**
 * _strlen - return length of string
 * **@s: pointer to char
 * Return: return an int
 */



int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
