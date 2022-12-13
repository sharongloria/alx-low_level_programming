#include <stdio.h>

/**
 * main - Entry point
 * Description: Print numbers with putchar
 * Return: 0
 */

int main(void)
{
	int num;

	for(num = '1'; num <10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
