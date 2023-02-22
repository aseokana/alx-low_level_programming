#include "main.h"

/**
 * print_times_table - Entry point
 * Description: a function that prints the n times table.
 * @n: The input to be checked.
 * Return: n times tables
 */

void print_times_table(int n)
{
	int base, num, d;

	if (n >= 0 && n <= 15)
	{
		for (base = 0; base <= n; base++)
		{
			_putchar('0');
			
			for (num = 1; num <= n; num++)
			{
				_putchar(',');
				_putchar(' ');
				
				d = base * num;
				if (d <= 9)
				{
					_putchar(' ');
				}
				if (d <= 99)
				{
					_putchar(' ');
				}

				if (d >= 100)
				{
					_putchar((d / 100) + '0');
					_putchar(((d / 10)) % 10 + '0');
				}
				else if (d <= 99 && d >= 10)
				{
					_putchar((d / 10) + '0');
				}
				_putchar((d % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
