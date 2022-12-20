#include "main.h"

/**
 *rev_string - Reverse a string
 *@s: string to reversed
 *Return: 0
 */

void rev_string(char *s)
{
	int length, i, div;
	char b;

	for (length = 0; s[length] != '\0'; length++)
	;
	i = 0;
	div = length / 2;

	while (div--)
	{
		b = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = b;
		i++;
	}
}

