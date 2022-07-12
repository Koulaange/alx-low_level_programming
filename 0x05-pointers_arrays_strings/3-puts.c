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
	int carelle;

	for (carelle = 0; str[carelle] != '\0'; carelle)
	{
		_putchar(str[carelle]);
	}
	_putchar('\n');
}
