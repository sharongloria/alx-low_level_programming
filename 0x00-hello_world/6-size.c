#include <stdio.h>

/**
 * main- Print size of various types
 * Description: This program prints various sizes of various data types
 * Return:(0)
*/
int main(void)
{
	char one;
	int two;
	long int three;
	long long int four;
	float five;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(one));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(two));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(three));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(four));
	printf("Size of a float: %lu byte(s) \n", (unsigned long)sizeof(five));
	return (0);
}

