#include <stdio.h>

/**
 * main - Entry point
 * Description: Print hexadecimal numbers
 * Return: 0
 */

int main(void)
{
	int num;
	char al;

	for (num = 0; num < 10; num++)
		putchar(num);
	for (al = 'a'; al <= 'f'; al++)
		putchar(num);

	putchar('\n');
	return (0);
}
