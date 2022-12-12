#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);

	putchar("/n");
	return (0);
}
