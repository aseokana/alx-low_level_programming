#include "main.h"

/**
 * print_sign - Entry point
 * Description: prints the sign of the input
 * @n: The input to be checked.
 * Return: 1 if input is an alphabet, 0 otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}