#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all letters except q and e
 * Return: 0
 */

int main(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'q' && al != 'e')
			putchar(al);
	}
	putchar('\n');
	return (0);
}
