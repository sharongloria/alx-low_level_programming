#include "main.h"

/**
 * print_sign - Entry point
 * @n: Prints sign of a number
 * Return: 0 or 1
 */

int print_sign(int n)
{
	int sign;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		sign = 0;
		_putchar('0');
	}
	else
	{
		sign = -1;
		_putchar('-');
	}
	return (sign);
}
