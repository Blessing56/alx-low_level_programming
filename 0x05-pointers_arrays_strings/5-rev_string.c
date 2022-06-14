#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: char type
 */

void rev_string(char *s)
{

	int i, l = 0;



	char b[500];



	strcpy(b, s);



	while (*(s + l) != '\0')

	{

		l++;

	}



	for (i = 0; i < l; i++)

	{

		*(s + i) = *(b + l - (i + 1));

	}

}
