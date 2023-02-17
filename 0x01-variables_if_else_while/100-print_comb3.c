#include <stdio.h>

/**
 * main - all possible combinations of two different digits,
 *
 * Return: 0.
 */
int main(void)
{
	int num, num1;

	for (num = 0; num <= 9; num++)
	{
		for (num1 = 0; num1 <= 9; num1++)
		{
			if (num < num1)
			{
				putchar((num % 10) + '0');
				putchar((num1 % 10) + '0');
				if ((num % 10) + '0' != '8' ||
						((num % 10) + '0' == '8' &&
						 (num1 % 10) + '0' != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
