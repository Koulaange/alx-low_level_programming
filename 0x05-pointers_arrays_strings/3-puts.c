#include "main.h"

/**
 * _puts - Write a function that prints a string, followed by a new line, to
 * stdout.
 *
 * @str: This is my input string
 *
 */

void _puts(char *str)
{
	int cayou;

	for (cayou = 0; str[cayou] != '\0'; cayou++)
	{
		_putchar(str[cayou]);
	}
	_putchar('\n');
}
