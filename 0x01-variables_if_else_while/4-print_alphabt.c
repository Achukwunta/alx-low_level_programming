#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - C program that prints the alphabet in lowercase
 * followed by a new line
 * Return: 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		if ((c == 'q' || c == 'e') != 1)
			putchar(c);
	putchar('\n')
	return (0);
}
