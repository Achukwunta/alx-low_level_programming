#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - C  program that prints all single digit number
 * followed by a new line.
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
