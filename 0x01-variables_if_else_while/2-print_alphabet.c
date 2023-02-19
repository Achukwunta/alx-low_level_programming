#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - C program that prints the alphabet in lowercase
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
