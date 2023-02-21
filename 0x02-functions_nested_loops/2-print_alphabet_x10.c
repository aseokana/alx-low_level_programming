#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints lowercase alphabets
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char abc;

		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
