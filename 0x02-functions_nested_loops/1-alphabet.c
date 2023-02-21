#include "main.h"

/**
 * FILE: 1-alphabet.c
 * print_alphabet - prints the alphabet in lowercase.
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}

	_putchar('\n');
}
