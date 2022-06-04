#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main : positive or negative test
 * Description: prints the status if the value is positive or negative
 * Return: 0 is program is successful
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
{
	printf("%d is negative\n", n);
}
	else if (n == 0)
{
	printf("%d is zero\n", n);
}
	else
{
	printf("%d is positive\n", n);
}
	return (0);
}
