#include "main.h"

/**
 * a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0 (Success)
 */
void print_alphabet(void) {
int k;
for (k = 'a'; k <= 'z'; k++)
{
_putchar(k);
}
_putchar('\n');
}
