#include "main.h"

/**
 * _strlen - Returns length of string
 * @s: String to be used.
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
