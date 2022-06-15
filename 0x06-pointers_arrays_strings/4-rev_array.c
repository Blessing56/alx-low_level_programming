#include "main.h"
#include <string.h>

/**
 * reverse_array - reverses the content of an arry of integers
 * @a: pointer to integer
 * @n: type integer
 * Return: 0 always
 */

void reverse_array(int *a, int n)

{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
