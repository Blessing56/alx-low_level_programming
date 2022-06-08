#include "main.h"

/**
 * main - prints _putchar followed by a newline
 *
 * Return: 0 always
 */

int main(void)
{
    char putCharStr[] = "_putchar";
    int lengthOfCharStr = sizeof(putCharStr) / sizeof(putCharStr[0]);

    int i;

    char firstAlphabet = 'c';

    for (i = 0; i < lengthOfCharStr - 1; i++)
    {
            _putchar(putCharStr[i]);
        }
    _putchar('\n');
    return (0);
}
