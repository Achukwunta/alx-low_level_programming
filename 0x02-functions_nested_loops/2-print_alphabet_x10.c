#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10x the alphabet
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
