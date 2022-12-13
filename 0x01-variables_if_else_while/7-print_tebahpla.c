#include <stdio.h>

/**
 * main- Entry point
 * Description: Print alphabet in reverse
 * Return: 0
 */

int main(void)
{
	int al;

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);

	putchar('\n');
	return (0);
}
