#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * main - C  program that prints all single digit number
 * of base 10 starting from 0
 *  followed by a new line.
 *  Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
