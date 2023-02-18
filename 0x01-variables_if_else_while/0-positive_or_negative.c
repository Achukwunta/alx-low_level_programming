#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - C program will assign a random number to the variable n
 * Description: A random number that prints
 * if it is positive, zero and negative
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%l is positive\n", n);
	else if (n < 0)
		printf("%l is negative\n", n);
	else
		printf("%l is zero\n", n);
	return (0);
}
