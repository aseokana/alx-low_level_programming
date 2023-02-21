#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: prints lowercase alphabets
 * Return: void
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
