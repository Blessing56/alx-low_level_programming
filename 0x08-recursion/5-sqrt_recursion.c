#include "main.h"

/**
 * _sqrt - _sqrt_recursion
 * @i: type integer
 * @n: type integer
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * 1) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: type integer
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
