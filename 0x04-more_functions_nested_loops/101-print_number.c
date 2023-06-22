#include "main.h"

/**
 * print_number - prints an integer
 *
 * Description:  prints an integer
 *
 * @n: Integer to print
 *
 * Return: return description
 */

void print_number(int n)
{
	unsigned int absolute_n;

	if (n < 0)
	{
		absolute_n = -n;
		_putchar(45);
	}
	else
	{
		absolute_n = n;
	}

	if (absolute_n / 10)
	{
		print_number(absolute_n / 10);
	}

	_putchar((absolute_n % 10) + 48);
}
