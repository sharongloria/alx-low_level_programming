#include "main.h"

/**
 * main -  Entry point
 * Description: Print alphabet ten times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int y;
	char z;

	for (y = 0; y < 10; y++)
	{
		for (z = 'a'; z <= 'z'; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}
