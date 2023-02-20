#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - C program that prints all possible combinations of single-digit
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	if (n < 9)
		putchar(',');
	putchar(32);
	putchar('\n');
	return (0);
}
