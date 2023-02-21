#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: prints the last digit of a number.
 * @n: The input to be checked.
 * Return: int
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		d *= -1;
	}
	_putchar(d + '0');
	return (d);
}
