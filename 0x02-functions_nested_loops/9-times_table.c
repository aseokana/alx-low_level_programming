#include "main.h"

/**
 * times_table - Entry point
 * Description: prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int nine, num, d;

	for (nine = 0; nine <= 9; nine++)
	{
		_putchar('0');

		for (num = 1; num <= 9; num++)
		{
			_putchar(',');
			_putchar(' ');

			d = nine * num;

			if (d <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((d / 10) + '0');
			}
			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
