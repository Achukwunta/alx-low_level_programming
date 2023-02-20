#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - C program that prints the lowercase alphabet in reverse
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
