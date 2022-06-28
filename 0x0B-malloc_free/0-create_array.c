#include "main.h"
#include <stdlib.h>


/**
 * create_array - creates anarry of chars,
 * and initializes it wih a specific char
 * @size: size of the array
 * @c: type char
 * Return: Null if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *create;
	unsigned int i;

	if (size == 0)
		return (NULL);

	create = malloc(sizeof(c) * size);

	if (create == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
		create[i] = c;

	return (create);
}

