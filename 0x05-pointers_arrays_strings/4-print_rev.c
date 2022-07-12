#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @c: This is the input string
 */
void print_rev(char *c)
{
	int cayou;

	for (cayou = 0; c[cayou] != '\0'; cayou++)
		;
	for (cayou = cayou - 1; s[cayou] != '\0'; cayou--)
	{
		_putchar(c[cayou]);
	}
	_putchar('\n');
}
