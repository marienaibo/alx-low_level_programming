#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
    int i;
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";

    for (i = 0; i < 26; i++)
    {
        _putchar(alphabet[i]);
    }
    _putchar('\n');
}

