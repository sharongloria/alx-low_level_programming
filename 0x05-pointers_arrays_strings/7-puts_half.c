#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of string
 * @str: string to be split
 * Return: 0
 */

void puts_half(char *str)
{
	int count = 0, i;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;
		count++;
	}
	if (count % 2 == 1)
	{
		i = count / 2;
	}
	else
	{
		i = (count - 1) / 2;
	}
	for (i++; i < count; i++)
		putchar(str[i]);
	putchar('\n');
}
