#include <stdio.h>

/**
 * print_to_98 - print all natural numbers from n to 98,
 * @n: integer number.
 *
 * Return: return nothing.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}

	printf("%d\n", n);
}

