#include "main.h"
#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to an int
 * @b: pointer to an int
 */



void swap_int(int *a, int *b)
{

	int swap;


	swap = *a;

	*a = *b;

	*b = swap;

}
