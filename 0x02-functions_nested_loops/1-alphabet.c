#include "main.h"

/**
 * main- Entry point
 * Description: Print alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		_putchar(al);

	_putchar('\n');
}
