 #include "main.h"


int tmp_prime(int n, int i);

/**
 * divisors - number is prime?
 * @n: integer
 * @m: integer
 * Return: boolean
 */

int divisors(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (divisors(n + 2, m));
	}
	else
	{
		return (1);
	}
}


/**
 * is_prime_number - displays prime numbers
 * @n: type number
 * Return: 1 if the input integer ia a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (divisors(3, n));
	}
}


