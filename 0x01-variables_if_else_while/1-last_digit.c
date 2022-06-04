#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - !-last_digit task
 * Description: print last digit
 * Return: 0 if program is successful
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, digit);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0i\n", n, digit);
	return (0);
}
