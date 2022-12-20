#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print string in reverse
 * @s: string to be printed
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
