#include <stdio.h>

/**
 * main - all possible combinations of three different digits,
 *
 * Return: 0.
 */
int main(void)
{
	int num, num1, num2;

	for (num = 0; num <= 9; num++)
	{
		for (num1 = 0; num1 <= 9; num1++)
		{
			for (num2 = 0; num2 <= 9; num2++)
			{
				if (num < num1 && num1 < num2)
				{
					putchar((num % 10) + '0');
					putchar((num1 % 10) + '0');
					putchar((num2 % 10) + '0');

					if (num != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
